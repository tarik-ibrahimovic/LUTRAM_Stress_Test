// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"RUN_SIM_US",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+47,0,"HALF_PERIOD_PS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"clk_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"wdat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+36,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"rdat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"LUTRAM16X10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"wdat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+37,0,"rdat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+49,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("read_all", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+38+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+40,0,"we_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_lut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"wdat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+41,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"rdat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("dist_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_lut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"wdat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+41,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"rdat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("dist_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+46,(0x2710U),32);
    bufp->fullIData(oldp+47,(0xc350U),32);
    bufp->fullIData(oldp+48,(2U),32);
    bufp->fullIData(oldp+49,(4U),32);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[0]),10);
    bufp->fullSData(oldp+2,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[1]),10);
    bufp->fullSData(oldp+3,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[2]),10);
    bufp->fullSData(oldp+4,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[3]),10);
    bufp->fullSData(oldp+5,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[4]),10);
    bufp->fullSData(oldp+6,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[5]),10);
    bufp->fullSData(oldp+7,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[6]),10);
    bufp->fullSData(oldp+8,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[7]),10);
    bufp->fullSData(oldp+9,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[8]),10);
    bufp->fullSData(oldp+10,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[9]),10);
    bufp->fullSData(oldp+11,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[10]),10);
    bufp->fullSData(oldp+12,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[11]),10);
    bufp->fullSData(oldp+13,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[12]),10);
    bufp->fullSData(oldp+14,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[13]),10);
    bufp->fullSData(oldp+15,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[14]),10);
    bufp->fullSData(oldp+16,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[15]),10);
    bufp->fullSData(oldp+17,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[0]),10);
    bufp->fullSData(oldp+18,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[1]),10);
    bufp->fullSData(oldp+19,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[2]),10);
    bufp->fullSData(oldp+20,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[3]),10);
    bufp->fullSData(oldp+21,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[4]),10);
    bufp->fullSData(oldp+22,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[5]),10);
    bufp->fullSData(oldp+23,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[6]),10);
    bufp->fullSData(oldp+24,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[7]),10);
    bufp->fullSData(oldp+25,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[8]),10);
    bufp->fullSData(oldp+26,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[9]),10);
    bufp->fullSData(oldp+27,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[10]),10);
    bufp->fullSData(oldp+28,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[11]),10);
    bufp->fullSData(oldp+29,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[12]),10);
    bufp->fullSData(oldp+30,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[13]),10);
    bufp->fullSData(oldp+31,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[14]),10);
    bufp->fullSData(oldp+32,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[15]),10);
    bufp->fullBit(oldp+33,(vlSelf->tb__DOT__clk_10));
    bufp->fullCData(oldp+34,(vlSelf->tb__DOT__addr),5);
    bufp->fullSData(oldp+35,(vlSelf->tb__DOT__wdat),10);
    bufp->fullBit(oldp+36,(vlSelf->tb__DOT__we));
    bufp->fullSData(oldp+37,(vlSelf->tb__DOT__dut__DOT__read_all
                             [(1U & ((IData)(vlSelf->tb__DOT__addr) 
                                     >> 4U))]),10);
    bufp->fullSData(oldp+38,(vlSelf->tb__DOT__dut__DOT__read_all[0]),10);
    bufp->fullSData(oldp+39,(vlSelf->tb__DOT__dut__DOT__read_all[1]),10);
    bufp->fullCData(oldp+40,(vlSelf->tb__DOT__dut__DOT__we_dec),2);
    bufp->fullCData(oldp+41,((0xfU & (IData)(vlSelf->tb__DOT__addr))),4);
    bufp->fullBit(oldp+42,((1U & (IData)(vlSelf->tb__DOT__dut__DOT__we_dec))));
    bufp->fullSData(oldp+43,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem
                             [(0xfU & (IData)(vlSelf->tb__DOT__addr))]),10);
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelf->tb__DOT__dut__DOT__we_dec) 
                                  >> 1U))));
    bufp->fullSData(oldp+45,(vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem
                             [(0xfU & (IData)(vlSelf->tb__DOT__addr))]),10);
}
