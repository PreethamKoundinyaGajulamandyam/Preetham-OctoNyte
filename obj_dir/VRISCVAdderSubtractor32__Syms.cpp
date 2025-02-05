// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRISCVAdderSubtractor32__pch.h"
#include "VRISCVAdderSubtractor32.h"
#include "VRISCVAdderSubtractor32___024root.h"

// FUNCTIONS
VRISCVAdderSubtractor32__Syms::~VRISCVAdderSubtractor32__Syms()
{
}

VRISCVAdderSubtractor32__Syms::VRISCVAdderSubtractor32__Syms(VerilatedContext* contextp, const char* namep, VRISCVAdderSubtractor32* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
