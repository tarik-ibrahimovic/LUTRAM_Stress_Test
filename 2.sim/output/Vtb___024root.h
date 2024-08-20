// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk_10;
    CData/*4:0*/ tb__DOT__addr;
    CData/*0:0*/ tb__DOT__we;
    CData/*1:0*/ tb__DOT__dut__DOT__we_dec;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk_10__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb__DOT__wdat;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*9:0*/, 2> tb__DOT__dut__DOT__read_all;
    VlUnpacked<SData/*9:0*/, 16> tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem;
    VlUnpacked<SData/*9:0*/, 16> tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlForkSync __Vfork_1__sync;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
