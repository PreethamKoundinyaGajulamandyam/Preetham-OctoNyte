// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISCVAdderSubtractor32__pch.h"

//============================================================
// Constructors

VRISCVAdderSubtractor32::VRISCVAdderSubtractor32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISCVAdderSubtractor32__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_opcode{vlSymsp->TOP.io_opcode}
    , io_carryIn{vlSymsp->TOP.io_carryIn}
    , io_carryOut{vlSymsp->TOP.io_carryOut}
    , io_overflowFlag{vlSymsp->TOP.io_overflowFlag}
    , io_zeroFlag{vlSymsp->TOP.io_zeroFlag}
    , io_negativeFlag{vlSymsp->TOP.io_negativeFlag}
    , io_a{vlSymsp->TOP.io_a}
    , io_b{vlSymsp->TOP.io_b}
    , io_result{vlSymsp->TOP.io_result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRISCVAdderSubtractor32::VRISCVAdderSubtractor32(const char* _vcname__)
    : VRISCVAdderSubtractor32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISCVAdderSubtractor32::~VRISCVAdderSubtractor32() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRISCVAdderSubtractor32___024root___eval_debug_assertions(VRISCVAdderSubtractor32___024root* vlSelf);
#endif  // VL_DEBUG
void VRISCVAdderSubtractor32___024root___eval_static(VRISCVAdderSubtractor32___024root* vlSelf);
void VRISCVAdderSubtractor32___024root___eval_initial(VRISCVAdderSubtractor32___024root* vlSelf);
void VRISCVAdderSubtractor32___024root___eval_settle(VRISCVAdderSubtractor32___024root* vlSelf);
void VRISCVAdderSubtractor32___024root___eval(VRISCVAdderSubtractor32___024root* vlSelf);

void VRISCVAdderSubtractor32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISCVAdderSubtractor32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISCVAdderSubtractor32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRISCVAdderSubtractor32___024root___eval_static(&(vlSymsp->TOP));
        VRISCVAdderSubtractor32___024root___eval_initial(&(vlSymsp->TOP));
        VRISCVAdderSubtractor32___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRISCVAdderSubtractor32___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRISCVAdderSubtractor32::eventsPending() { return false; }

uint64_t VRISCVAdderSubtractor32::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRISCVAdderSubtractor32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRISCVAdderSubtractor32___024root___eval_final(VRISCVAdderSubtractor32___024root* vlSelf);

VL_ATTR_COLD void VRISCVAdderSubtractor32::final() {
    VRISCVAdderSubtractor32___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISCVAdderSubtractor32::hierName() const { return vlSymsp->name(); }
const char* VRISCVAdderSubtractor32::modelName() const { return "VRISCVAdderSubtractor32"; }
unsigned VRISCVAdderSubtractor32::threads() const { return 1; }
void VRISCVAdderSubtractor32::prepareClone() const { contextp()->prepareClone(); }
void VRISCVAdderSubtractor32::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VRISCVAdderSubtractor32::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VRISCVAdderSubtractor32::trace()' called on model that was Verilated without --trace option");
}
