//======================================================================== 
// openCologne * NLnet-sponsored open-source design ware for GateMate
//------------------------------------------------------------------------
//                   Copyright (C) 2024 Chili.CHIPS*ba
// 
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
//
// 1. Redistributions of source code must retain the above copyright 
// notice, this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright 
// notice, this list of conditions and the following disclaimer in the 
// documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its 
// contributors may be used to endorse or promote products derived
// from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS 
// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED 
// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A 
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//              https://opensource.org/license/bsd-3-clause
//------------------------------------------------------------------------
// Description: <your text goes here>
//========================================================================

// <modify as needed>
/* verilator lint_off PINMISSING */
`timescale 1ns/1ps
module top 
   import csr_pkg::*;
(
   input logic clk,
   input logic arst_n,
   output logic tick_1us,
   input logic uart_rx,
   output logic uart_tx,

   output  logic o_psram_csn,
   output  logic o_psram_sclk,
   inout   logic io_psram_data0,
   inout   logic io_psram_data1,
   inout   logic io_psram_data2,
   inout   logic io_psram_data3,
   inout   logic io_psram_data4,
   inout   logic io_psram_data5,
   inout   logic io_psram_data6,
   inout   logic io_psram_data7,
   output logic led
);
/*    

 */
   //logic tick_1us; //to do: generate this tick and check in edusoc what it is
   logic psram_stb, psram_we, psram_busy;

   logic [15:0] psram_rdat;
 
   psram u_psram (
      .arst_n(arst_n),     //i
      .i_clk(clk_out),         //i

      .i_stb(psram_stb),
      .i_we(psram_we),

      .i_addr({command_bytes[3],command_bytes[2],command_bytes[1]}),
      .i_din({command_bytes[5],command_bytes[4]}),

      .psram_busy(psram_busy),

      .o_dout(psram_rdat),

      .o_psram_csn(o_psram_csn),
      .o_psram_sclk(o_psram_sclk),
      .io_psram_data0(io_psram_data0),
      .io_psram_data1(io_psram_data1),
      .io_psram_data2(io_psram_data2),
      .io_psram_data3(io_psram_data3),
      .io_psram_data4(io_psram_data4),
      .io_psram_data5(io_psram_data5),
      .io_psram_data6(io_psram_data6),
      .io_psram_data7(io_psram_data7)
   ); 


   logic [7:0] uart_tx_data;
   logic uart_tx_write;
   logic uart_rx_read, uart_tx_busy; 
   uart_rx_t uart_rx_arr;

   uart u_uart(
      .arst_n(arst_n),      //i
      .clk(clk_out),            //i

      .tick_1us(tick_1us),  //i

      .uart_tx_write(uart_tx_write), //i
      .uart_tx_data(uart_tx_data), //i
      .uart_rx_read(uart_rx_read),  //i

      .uart_tx_busy(uart_tx_busy),


      .uart_rx(uart_rx),    //i
      .uart_tx(uart_tx),     //o

      .uart_rx_arr(uart_rx_arr) //o
   );  
//----------------------------------------------------
// 10 MHz -> 40 MHz PLL + SIM model
   logic clk270, clk180, clk90, clk0, usr_ref_out, clk_out;
   logic usr_pll_lock_stdy, usr_pll_lock;








   CC_PLL #(
      .REF_CLK("10.0"),    // reference input in MHz
      .OUT_CLK("40.0"),   // pll output frequency in MHz
      .PERF_MD("ECONOMY"), // LOWPOWER, ECONOMY, SPEED
      .LOW_JITTER(1),      // 0: disable, 1: enable low jitter mode
      .CI_FILTER_CONST(2), // optional CI filter constant
      .CP_FILTER_CONST(4)  // optional CP filter constant
   ) u_pll (
      .CLK_REF(clk), .CLK_FEEDBACK(1'b0), .USR_CLK_REF(1'b0),
      .USR_LOCKED_STDY_RST(1'b0), .USR_PLL_LOCKED_STDY(usr_pll_lock_stdy), .USR_PLL_LOCKED(usr_pll_lock),
      .CLK270(clk270), .CLK180(clk180), .CLK90(clk90), .CLK0(clk_out), .CLK_REF_OUT(usr_ref_out)
   );


 //--------------------------
 // Generating 1us ticks
   logic [5:0] counter;
   logic tick_1us_reg;
   always_ff @(posedge clk_out or negedge arst_n) begin
      if(arst_n == 1'b0) begin
         counter <= '0;
      end
      else begin
         if(counter == 6'd39) begin
            tick_1us_reg <= 1'b1;
            counter      <= 6'b0;
         end
         else begin
            tick_1us_reg <= 1'b0;
            counter <= counter + 6'b1;
         end
      end
   end
   assign tick_1us = tick_1us_reg;


   //---------------------
   // Sending to UART TX


/*    assign uart_tx_data = uart_rx_arr.data;
   assign uart_tx_write = uart_rx_arr.valid;

   assign uart_rx_read = uart_rx_arr.valid; */
   typedef enum  logic [1:0]  {IDLE = 2'b0, 
                               READ_COMMAND = 2'b1, 
                               WAIT_PSRAM = 2'b10,
                               PROCESS_COMMAND = 2'b11 } state_psram_t;
   state_psram_t state_psram;
   //-----------------------------------------------------------
   // command buffer: B0    -> 0 - Read, 1 - Write
   //                 B1-7  -> PSRAM address
   //                 B8-11 -> PSRAM wdat (left out for reading)
   logic [7:0] command_bytes [5:0];

   logic [2:0] byte_count;
   
   
   always_ff @(posedge clk_out or negedge arst_n) begin
      if(arst_n == 1'b0) begin
         state_psram <= IDLE;
         byte_count    <= '0;
      end
      else begin
         unique case (state_psram)
            IDLE: begin
               if(uart_rx == 1'b0) begin
                  state_psram <= READ_COMMAND;   
                  byte_count  <= '0;
               end
            end
            READ_COMMAND: begin                                                              //fill up the command buffer
               if(uart_rx_arr.valid == 1'b1) begin
                  command_bytes[byte_count] <= uart_rx_arr.data;
                  byte_count <= byte_count + 3'b1;
               end
               if(byte_count == 3'd6 | (byte_count == 3'd4 & command_bytes[0] == '0)) begin
                  state_psram <= WAIT_PSRAM;
                  psram_stb   <= 1'b1;
                  psram_we    <= (byte_count == 3'd6);
               end
            end
            WAIT_PSRAM: begin
               psram_stb   <= 1'b0;
               psram_we    <= 1'b0;       
               state_psram <= PROCESS_COMMAND;        
            end
            PROCESS_COMMAND: begin
               if(psram_busy == 1'b0) begin
                  state_psram <= IDLE;               
               end
            end
         endcase
      end
   end

   //----------------------------
   // Write out read data on UART
   assign uart_tx_data  = psram_rdat[7:0];
   assign uart_tx_write = (psram_busy == 1'b0 & state_psram == PROCESS_COMMAND); 
   assign uart_rx_read = uart_rx_arr.valid;



   //--------------------------
   // Generating 163ms ticks on 14 bits counter
   logic [11:0] counter_10;

   always_ff @(posedge clk_out or negedge arst_n) begin
      if(arst_n == 1'b0) begin
         counter_10 <= '0;
      end
      else begin
         counter_10 <= counter_10 + 12'b1;
      end
   end


   //---------------------
   // Driving LEDs
   logic [27:0] u_counter ; //25 prev

   always_ff @(posedge clk_out or negedge arst_n) begin
      if(arst_n == 1'b0) begin
         u_counter <= '0;
      end
      else begin
         u_counter <= u_counter + 28'b1;
      end
   end

   //-------------
   // Buffer fill
   logic buffer [7:0];
   logic buffer_full;

   logic [2:0] in;
   logic uart_tx_prev;

   always_ff @(posedge clk_out) begin
      if(buffer_full == 1'b0 & uart_tx_prev != uart_tx) begin
         buffer [in] <= uart_tx ;
         in          <= in + 3'b1;
         if(in == '1) begin
            buffer_full <= 1'b1;
            in <= 3'b0;
         end
      end
      else if(u_counter[27:25] == '1) begin
         buffer_full <= 1'b0;
      end
      uart_tx_prev <= uart_tx;
   end
   //--------------
   // Buffer empty

   logic counter_24_prev;

   always_ff @(posedge clk_out) begin
      if(u_counter[24] == 1'b1 & counter_24_prev == 1'b0 & buffer_full == 1'b1) begin
         led <= buffer [u_counter[27:25]];   
      end
      counter_24_prev <= u_counter[24];
   end

endmodule: top

/*
------------------------------------------------------------------------------
Version History:
------------------------------------------------------------------------------
 2024/5/10 <your-name>: Initial creation
*/
