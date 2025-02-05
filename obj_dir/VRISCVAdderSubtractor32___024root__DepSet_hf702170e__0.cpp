// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCVAdderSubtractor32.h for the primary calling header

#include "VRISCVAdderSubtractor32__pch.h"
#include "VRISCVAdderSubtractor32__Syms.h"
#include "VRISCVAdderSubtractor32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__ico(VRISCVAdderSubtractor32___024root* vlSelf);
#endif  // VL_DEBUG

void VRISCVAdderSubtractor32___024root___eval_triggers__ico(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISCVAdderSubtractor32___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__act(VRISCVAdderSubtractor32___024root* vlSelf);
#endif  // VL_DEBUG

void VRISCVAdderSubtractor32___024root___eval_triggers__act(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISCVAdderSubtractor32___024root___dump_triggers__act(vlSelf);
    }
#endif
}
