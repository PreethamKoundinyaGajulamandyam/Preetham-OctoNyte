// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCVAdderSubtractor32.h for the primary calling header

#include "VRISCVAdderSubtractor32__pch.h"
#include "VRISCVAdderSubtractor32__Syms.h"
#include "VRISCVAdderSubtractor32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___dump_triggers__stl(VRISCVAdderSubtractor32___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISCVAdderSubtractor32___024root___eval_triggers__stl(VRISCVAdderSubtractor32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCVAdderSubtractor32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCVAdderSubtractor32___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRISCVAdderSubtractor32___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
