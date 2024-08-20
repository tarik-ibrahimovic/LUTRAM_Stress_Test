// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk_10__0 
        = vlSelf->tb__DOT__clk_10;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "tb.sv", 
                                       52);
    vlSelf->tb__DOT__addr = 0U;
    vlSelf->tb__DOT__we = 1U;
    vlSelf->tb__DOT__wdat = 0xbcU;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "tb.sv", 
                                       56);
    vlSelf->tb__DOT__we = 0U;
    co_await vlSelf->__VdlySched.delay(0xf4240ULL, 
                                       nullptr, "tb.sv", 
                                       60);
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "tb.sv", 
                                       62);
    vlSelf->tb__DOT__addr = 0xfU;
    vlSelf->tb__DOT__we = 1U;
    vlSelf->tb__DOT__wdat = 0x1bcU;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "tb.sv", 
                                       66);
    vlSelf->tb__DOT__we = 0U;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "tb.sv", 
                                       71);
    vlSelf->tb__DOT__addr = 0x1fU;
    vlSelf->tb__DOT__we = 1U;
    vlSelf->tb__DOT__wdat = 0x2bcU;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "tb.sv", 
                                       75);
    vlSelf->tb__DOT__we = 0U;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "tb.sv", 
                                       81);
    vlSelf->tb__DOT__addr = 0x10U;
    vlSelf->tb__DOT__we = 1U;
    vlSelf->tb__DOT__wdat = 0x3bcU;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "tb.sv", 
                                       85);
    vlSelf->tb__DOT__we = 0U;
    vlSelf->__Vfork_1__sync.done("tb.sv", 50);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x2540be400ULL, 
                                       nullptr, "tb.sv", 
                                       46);
    VL_FINISH_MT("tb.sv", 47, "");
    vlSelf->__Vfork_1__sync.done("tb.sv", 45);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xc350ULL, 
                                           nullptr, 
                                           "tb.sv", 
                                           42);
        vlSelf->tb__DOT__clk_10 = (1U & (~ (IData)(vlSelf->tb__DOT__clk_10)));
    }
    vlSelf->__Vfork_1__sync.done("tb.sv", 41);
}

void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__dut__DOT__we_dec = 0U;
    vlSelf->tb__DOT__dut__DOT__we_dec = (((~ ((IData)(1U) 
                                              << (1U 
                                                  & ((IData)(vlSelf->tb__DOT__addr) 
                                                     >> 4U)))) 
                                          & (IData)(vlSelf->tb__DOT__dut__DOT__we_dec)) 
                                         | (3U & ((IData)(vlSelf->tb__DOT__we) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(vlSelf->tb__DOT__addr) 
                                                      >> 4U)))));
    vlSelf->tb__DOT__dut__DOT__read_all[0U] = vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem
        [(0xfU & (IData)(vlSelf->tb__DOT__addr))];
    vlSelf->tb__DOT__dut__DOT__read_all[1U] = vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem
        [(0xfU & (IData)(vlSelf->tb__DOT__addr))];
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __VdlyVal__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0;
    __VdlyVal__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0;
    __VdlyDim0__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0 = 0;
    SData/*9:0*/ __VdlyVal__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0;
    __VdlyVal__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0;
    __VdlyDim0__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0;
    __VdlySet__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0;
    __VdlySet__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0 = 0;
    // Body
    __VdlySet__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0 = 0U;
    __VdlySet__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0 = 0U;
    if ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__we_dec))) {
        __VdlyVal__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0 
            = vlSelf->tb__DOT__wdat;
        __VdlyDim0__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0 
            = (0xfU & (IData)(vlSelf->tb__DOT__addr));
        __VdlySet__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0 = 1U;
    }
    if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__we_dec))) {
        __VdlyVal__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0 
            = vlSelf->tb__DOT__wdat;
        __VdlyDim0__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0 
            = (0xfU & (IData)(vlSelf->tb__DOT__addr));
        __VdlySet__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0 = 1U;
    }
    if (__VdlySet__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0) {
        vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem[__VdlyDim0__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0] 
            = __VdlyVal__tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem__v0;
    }
    if (__VdlySet__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0) {
        vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem[__VdlyDim0__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0] 
            = __VdlyVal__tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem__v0;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb__DOT__dut__DOT__we_dec = 0U;
    vlSelf->tb__DOT__dut__DOT__we_dec = (((~ ((IData)(1U) 
                                              << (1U 
                                                  & ((IData)(vlSelf->tb__DOT__addr) 
                                                     >> 4U)))) 
                                          & (IData)(vlSelf->tb__DOT__dut__DOT__we_dec)) 
                                         | (3U & ((IData)(vlSelf->tb__DOT__we) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(vlSelf->tb__DOT__addr) 
                                                      >> 4U)))));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__dut__DOT__read_all[1U] = vlSelf->tb__DOT__dut__DOT__genblk1__BRA__1__KET____DOT__u_lut__DOT__dist_mem
        [(0xfU & (IData)(vlSelf->tb__DOT__addr))];
    vlSelf->tb__DOT__dut__DOT__read_all[0U] = vlSelf->tb__DOT__dut__DOT__genblk1__BRA__0__KET____DOT__u_lut__DOT__dist_mem
        [(0xfU & (IData)(vlSelf->tb__DOT__addr))];
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb.sv", 20, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb.sv", 20, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
