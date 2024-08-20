// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[0]),10);
        bufp->chgSData(oldp+1,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[1]),10);
        bufp->chgSData(oldp+2,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[2]),10);
        bufp->chgSData(oldp+3,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[3]),10);
        bufp->chgSData(oldp+4,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[4]),10);
        bufp->chgSData(oldp+5,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[5]),10);
        bufp->chgSData(oldp+6,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[6]),10);
        bufp->chgSData(oldp+7,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[7]),10);
        bufp->chgSData(oldp+8,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[8]),10);
        bufp->chgSData(oldp+9,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[9]),10);
        bufp->chgSData(oldp+10,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[10]),10);
        bufp->chgSData(oldp+11,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[11]),10);
        bufp->chgSData(oldp+12,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[12]),10);
        bufp->chgSData(oldp+13,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[13]),10);
        bufp->chgSData(oldp+14,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[14]),10);
        bufp->chgSData(oldp+15,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[15]),10);
        bufp->chgSData(oldp+16,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[0]),10);
        bufp->chgSData(oldp+17,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[1]),10);
        bufp->chgSData(oldp+18,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[2]),10);
        bufp->chgSData(oldp+19,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[3]),10);
        bufp->chgSData(oldp+20,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[4]),10);
        bufp->chgSData(oldp+21,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[5]),10);
        bufp->chgSData(oldp+22,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[6]),10);
        bufp->chgSData(oldp+23,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[7]),10);
        bufp->chgSData(oldp+24,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[8]),10);
        bufp->chgSData(oldp+25,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[9]),10);
        bufp->chgSData(oldp+26,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[10]),10);
        bufp->chgSData(oldp+27,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[11]),10);
        bufp->chgSData(oldp+28,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[12]),10);
        bufp->chgSData(oldp+29,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[13]),10);
        bufp->chgSData(oldp+30,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[14]),10);
        bufp->chgSData(oldp+31,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[15]),10);
    }
    bufp->chgBit(oldp+32,(vlSelf->tb__DOT__clk_10));
    bufp->chgCData(oldp+33,(vlSelf->tb__DOT__addr),5);
    bufp->chgSData(oldp+34,(vlSelf->tb__DOT__wdat),10);
    bufp->chgBit(oldp+35,(vlSelf->tb__DOT__we));
    bufp->chgSData(oldp+36,(vlSelf->tb__DOT__dut__DOT__read_all
                            [(1U & ((IData)(vlSelf->tb__DOT__addr) 
                                    >> 4U))]),10);
    bufp->chgSData(oldp+37,(vlSelf->tb__DOT__dut__DOT__read_all[0]),10);
    bufp->chgSData(oldp+38,(vlSelf->tb__DOT__dut__DOT__read_all[1]),10);
    bufp->chgCData(oldp+39,(vlSelf->tb__DOT__dut__DOT__we_dec),2);
    bufp->chgCData(oldp+40,((0xfU & (IData)(vlSelf->tb__DOT__addr))),4);
    bufp->chgBit(oldp+41,((1U & (IData)(vlSelf->tb__DOT__dut__DOT__we_dec))));
    bufp->chgSData(oldp+42,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem
                            [(0xfU & (IData)(vlSelf->tb__DOT__addr))]),10);
    bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->tb__DOT__dut__DOT__we_dec) 
                                 >> 1U))));
    bufp->chgSData(oldp+44,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem
                            [(0xfU & (IData)(vlSelf->tb__DOT__addr))]),10);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
