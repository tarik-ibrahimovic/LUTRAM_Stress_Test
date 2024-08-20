//==========================================================================
// Copyright (C) 2024 Chili.CHIPS*ba
//--------------------------------------------------------------------------
//                      PROPRIETARY INFORMATION
//
// The information contained in this file is the property of CHILI CHIPS LLC.
// Except as specifically authorized in writing by CHILI CHIPS LLC, the holder
// of this file: (1) shall keep all information contained herein confidential;
// and (2) shall protect the same in whole or in part from disclosure and
// dissemination to all third parties; and (3) shall use the same for operation
// and maintenance purposes only.
//--------------------------------------------------------------------------
// Description: Simulation testbench for the PSRAM example
// PSRAM is operated by sending in commands
// Format of the commands sent to PSRAM through the UART RX is: 1st byte: <Read(0)/Write(1)>
//                                                              2-5 byte: <24 bit Address>
//                                                Write case:   6-7 byte: <16 bit Data>
//==========================================================================
`timescale 1ps/1ps
module tb #(
   parameter int RUN_SIM_US = 1_000_0
)();

//--------------------------------------------------------------
// Generate clock and run sim for the specified amount of time
   localparam  HALF_PERIOD_PS = 50_000; // 50MHz
   logic       clk_10;

   initial begin
      clk_10  = 1'b0;

      $dumpfile("../2.sim/tb.vcd");
		$dumpvars(0, tb);

      fork 
         forever begin: clock_gen
            #(HALF_PERIOD_PS * 1ps) clk_10 = ~clk_10;
         end

         begin: run_sim
            #(RUN_SIM_US * 1us);
            $finish();
         end

         begin: seq
            
         end
      join
   end

   top dut (
      .clk(clk_10),
      .addr(addr),
      .wdat(wdat),
      .we(we),
      .rdat(rdat)
   );

//--------------------------------------------------------------


endmodule: tb

/*
------------------------------------------------------------------------------
Version History:
------------------------------------------------------------------------------
 2024/06/12 TarikI: initial creation    
*/
