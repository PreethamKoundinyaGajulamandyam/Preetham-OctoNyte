// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISCVAdderSubtractor32.h for the primary calling header

#ifndef VERILATED_VRISCVADDERSUBTRACTOR32___024ROOT_H_
#define VERILATED_VRISCVADDERSUBTRACTOR32___024ROOT_H_  // guard

#include "verilated.h"


class VRISCVAdderSubtractor32__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRISCVAdderSubtractor32___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_opcode,3,0);
    VL_IN8(io_carryIn,0,0);
    VL_OUT8(io_carryOut,0,0);
    VL_OUT8(io_overflowFlag,0,0);
    VL_OUT8(io_zeroFlag,0,0);
    VL_OUT8(io_negativeFlag,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_a,31,0);
    VL_IN(io_b,31,0);
    VL_OUT(io_result,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRISCVAdderSubtractor32__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISCVAdderSubtractor32___024root(VRISCVAdderSubtractor32__Syms* symsp, const char* v__name);
    ~VRISCVAdderSubtractor32___024root();
    VL_UNCOPYABLE(VRISCVAdderSubtractor32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
