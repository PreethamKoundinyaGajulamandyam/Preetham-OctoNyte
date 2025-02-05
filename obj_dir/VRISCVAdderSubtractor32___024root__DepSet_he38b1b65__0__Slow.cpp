// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCVAdderSubtractor32.h for the primary calling header

#include "VRISCVAdderSubtractor32__pch.h"
#include "VRISCVAdderSubtractor32___024root.h"

VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___eval_static(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___eval_initial(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___eval_final(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__stl(VRISCVAdderSubtractor32___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRISCVAdderSubtractor32___024root___eval_phase__stl(VRISCVAdderSubtractor32___024root* vlSelf);

VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___eval_settle(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VRISCVAdderSubtractor32___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("RTL/Chisel/generators/generated/verilog_sv2v/RISCVAdderSubtractor32.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRISCVAdderSubtractor32___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__stl(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VRISCVAdderSubtractor32___024root___ico_sequent__TOP__0(VRISCVAdderSubtractor32___024root* vlSelf);

VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___eval_stl(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VRISCVAdderSubtractor32___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___eval_triggers__stl(VRISCVAdderSubtractor32___024root* vlSelf);

VL_ATTR_COLD bool VRISCVAdderSubtractor32___024root___eval_phase__stl(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRISCVAdderSubtractor32___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VRISCVAdderSubtractor32___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__ico(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__act(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__nba(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___ctor_var_reset(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_a = VL_RAND_RESET_I(32);
    vlSelf->io_b = VL_RAND_RESET_I(32);
    vlSelf->io_opcode = VL_RAND_RESET_I(4);
    vlSelf->io_carryIn = VL_RAND_RESET_I(1);
    vlSelf->io_result = VL_RAND_RESET_I(32);
    vlSelf->io_carryOut = VL_RAND_RESET_I(1);
    vlSelf->io_overflowFlag = VL_RAND_RESET_I(1);
    vlSelf->io_zeroFlag = VL_RAND_RESET_I(1);
    vlSelf->io_negativeFlag = VL_RAND_RESET_I(1);
}
