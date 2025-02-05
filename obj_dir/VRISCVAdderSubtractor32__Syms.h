// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCVADDERSUBTRACTOR32__SYMS_H_
#define VERILATED_VRISCVADDERSUBTRACTOR32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRISCVAdderSubtractor32.h"

// INCLUDE MODULE CLASSES
#include "VRISCVAdderSubtractor32___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRISCVAdderSubtractor32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRISCVAdderSubtractor32* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRISCVAdderSubtractor32___024root TOP;

    // CONSTRUCTORS
    VRISCVAdderSubtractor32__Syms(VerilatedContext* contextp, const char* namep, VRISCVAdderSubtractor32* modelp);
    ~VRISCVAdderSubtractor32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
