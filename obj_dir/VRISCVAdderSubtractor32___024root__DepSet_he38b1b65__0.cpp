// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCVAdderSubtractor32.h for the primary calling header

#include "VRISCVAdderSubtractor32__pch.h"
#include "VRISCVAdderSubtractor32___024root.h"

VL_INLINE_OPT void VRISCVAdderSubtractor32___024root___ico_sequent__TOP__0(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ RISCVAdderSubtractor32__DOT__width;
    RISCVAdderSubtractor32__DOT__width = 0;
    IData/*31:0*/ RISCVAdderSubtractor32__DOT__mask;
    RISCVAdderSubtractor32__DOT__mask = 0;
    IData/*31:0*/ RISCVAdderSubtractor32__DOT___fullArithmeticResult_T;
    RISCVAdderSubtractor32__DOT___fullArithmeticResult_T = 0;
    IData/*31:0*/ RISCVAdderSubtractor32__DOT__bEffective;
    RISCVAdderSubtractor32__DOT__bEffective = 0;
    IData/*31:0*/ RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1;
    RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1 = 0;
    QData/*32:0*/ RISCVAdderSubtractor32__DOT__fullArithmeticResult;
    RISCVAdderSubtractor32__DOT__fullArithmeticResult = 0;
    CData/*0:0*/ RISCVAdderSubtractor32__DOT__aSign;
    RISCVAdderSubtractor32__DOT__aSign = 0;
    CData/*0:0*/ RISCVAdderSubtractor32__DOT__sumSign;
    RISCVAdderSubtractor32__DOT__sumSign = 0;
    // Body
    if ((0U == (3U & (IData)(vlSelf->io_opcode)))) {
        RISCVAdderSubtractor32__DOT__width = 8U;
        RISCVAdderSubtractor32__DOT__mask = 0xffU;
    } else if ((1U == (3U & (IData)(vlSelf->io_opcode)))) {
        RISCVAdderSubtractor32__DOT__width = 0x10U;
        RISCVAdderSubtractor32__DOT__mask = 0xffffU;
    } else {
        RISCVAdderSubtractor32__DOT__width = 0x20U;
        RISCVAdderSubtractor32__DOT__mask = 0xffffffffU;
    }
    RISCVAdderSubtractor32__DOT___fullArithmeticResult_T 
        = (vlSelf->io_a & RISCVAdderSubtractor32__DOT__mask);
    RISCVAdderSubtractor32__DOT__bEffective = (vlSelf->io_b 
                                               & RISCVAdderSubtractor32__DOT__mask);
    RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1 
        = ((8U & (IData)(vlSelf->io_opcode)) ? ((IData)(1U) 
                                                + (~ RISCVAdderSubtractor32__DOT__bEffective))
            : RISCVAdderSubtractor32__DOT__bEffective);
    RISCVAdderSubtractor32__DOT__fullArithmeticResult 
        = (0x1ffffffffULL & ((4U & (IData)(vlSelf->io_opcode))
                              ? ((((QData)((IData)(
                                                   (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T 
                                                    >> 0x1fU))) 
                                   << 0x20U) | (QData)((IData)(RISCVAdderSubtractor32__DOT___fullArithmeticResult_T))) 
                                 + (((QData)((IData)(
                                                     (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1 
                                                      >> 0x1fU))) 
                                     << 0x20U) | (QData)((IData)(RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1))))
                              : ((QData)((IData)(RISCVAdderSubtractor32__DOT___fullArithmeticResult_T)) 
                                 + (QData)((IData)(RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1)))));
    if ((8U == (IData)(RISCVAdderSubtractor32__DOT__width))) {
        RISCVAdderSubtractor32__DOT__aSign = (1U & 
                                              (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T 
                                               >> 7U));
        RISCVAdderSubtractor32__DOT__sumSign = (1U 
                                                & (IData)(
                                                          (RISCVAdderSubtractor32__DOT__fullArithmeticResult 
                                                           >> 7U)));
    } else if ((0x10U == (IData)(RISCVAdderSubtractor32__DOT__width))) {
        RISCVAdderSubtractor32__DOT__aSign = (1U & 
                                              (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T 
                                               >> 0xfU));
        RISCVAdderSubtractor32__DOT__sumSign = (1U 
                                                & (IData)(
                                                          (RISCVAdderSubtractor32__DOT__fullArithmeticResult 
                                                           >> 0xfU)));
    } else {
        RISCVAdderSubtractor32__DOT__aSign = (1U & 
                                              ((0x20U 
                                                == (IData)(RISCVAdderSubtractor32__DOT__width)) 
                                               & (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T 
                                                  >> 0x1fU)));
        RISCVAdderSubtractor32__DOT__sumSign = (1U 
                                                & ((0x20U 
                                                    == (IData)(RISCVAdderSubtractor32__DOT__width)) 
                                                   & (IData)(
                                                             (RISCVAdderSubtractor32__DOT__fullArithmeticResult 
                                                              >> 0x1fU))));
    }
    vlSelf->io_result = ((IData)(RISCVAdderSubtractor32__DOT__fullArithmeticResult) 
                         & RISCVAdderSubtractor32__DOT__mask);
    vlSelf->io_carryOut = (1U & ((IData)((0U == (0xcU 
                                                 & (IData)(vlSelf->io_opcode))))
                                  ? ((8U == (IData)(RISCVAdderSubtractor32__DOT__width))
                                      ? (IData)((RISCVAdderSubtractor32__DOT__fullArithmeticResult 
                                                 >> 8U))
                                      : ((0x10U == (IData)(RISCVAdderSubtractor32__DOT__width))
                                          ? (IData)(
                                                    (RISCVAdderSubtractor32__DOT__fullArithmeticResult 
                                                     >> 0x10U))
                                          : ((0x20U 
                                              == (IData)(RISCVAdderSubtractor32__DOT__width)) 
                                             & (IData)(
                                                       (RISCVAdderSubtractor32__DOT__fullArithmeticResult 
                                                        >> 0x20U)))))
                                  : ((IData)((8U == 
                                              (0xcU 
                                               & (IData)(vlSelf->io_opcode)))) 
                                     & (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T 
                                        < RISCVAdderSubtractor32__DOT__bEffective))));
    vlSelf->io_zeroFlag = (1U & (~ (IData)((0U != vlSelf->io_result))));
    vlSelf->io_negativeFlag = (((IData)(vlSelf->io_opcode) 
                                >> 2U) & (IData)(RISCVAdderSubtractor32__DOT__sumSign));
    vlSelf->io_overflowFlag = (((IData)(RISCVAdderSubtractor32__DOT__aSign) 
                                == (1U & ((8U == (IData)(RISCVAdderSubtractor32__DOT__width))
                                           ? (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1 
                                              >> 7U)
                                           : ((0x10U 
                                               == (IData)(RISCVAdderSubtractor32__DOT__width))
                                               ? (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1 
                                                  >> 0xfU)
                                               : ((0x20U 
                                                   == (IData)(RISCVAdderSubtractor32__DOT__width)) 
                                                  & (RISCVAdderSubtractor32__DOT___fullArithmeticResult_T_1 
                                                     >> 0x1fU)))))) 
                               & ((IData)(RISCVAdderSubtractor32__DOT__aSign) 
                                  != (IData)(RISCVAdderSubtractor32__DOT__sumSign)));
}

void VRISCVAdderSubtractor32___024root___eval_ico(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VRISCVAdderSubtractor32___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VRISCVAdderSubtractor32___024root___eval_triggers__ico(VRISCVAdderSubtractor32___024root* vlSelf);

bool VRISCVAdderSubtractor32___024root___eval_phase__ico(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VRISCVAdderSubtractor32___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VRISCVAdderSubtractor32___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VRISCVAdderSubtractor32___024root___eval_act(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_act\n"); );
}

void VRISCVAdderSubtractor32___024root___eval_nba(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_nba\n"); );
}

void VRISCVAdderSubtractor32___024root___eval_triggers__act(VRISCVAdderSubtractor32___024root* vlSelf);

bool VRISCVAdderSubtractor32___024root___eval_phase__act(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRISCVAdderSubtractor32___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRISCVAdderSubtractor32___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRISCVAdderSubtractor32___024root___eval_phase__nba(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRISCVAdderSubtractor32___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__ico(VRISCVAdderSubtractor32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__nba(VRISCVAdderSubtractor32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__act(VRISCVAdderSubtractor32___024root* vlSelf);
#endif  // VL_DEBUG

void VRISCVAdderSubtractor32___024root___eval(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VRISCVAdderSubtractor32___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("RTL/Chisel/generators/generated/verilog_sv2v/RISCVAdderSubtractor32.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VRISCVAdderSubtractor32___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRISCVAdderSubtractor32___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RTL/Chisel/generators/generated/verilog_sv2v/RISCVAdderSubtractor32.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRISCVAdderSubtractor32___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RTL/Chisel/generators/generated/verilog_sv2v/RISCVAdderSubtractor32.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRISCVAdderSubtractor32___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRISCVAdderSubtractor32___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRISCVAdderSubtractor32___024root___eval_debug_assertions(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_opcode & 0xf0U))) {
        Verilated::overWidthError("io_opcode");}
    if (VL_UNLIKELY((vlSelf->io_carryIn & 0xfeU))) {
        Verilated::overWidthError("io_carryIn");}
}
#endif  // VL_DEBUG
