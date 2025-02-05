#include "verilated.h"
#include "valu64.h"      // Generated header for ALU64 module
#include <iostream>
#include <cstdint>

// Global simulation time (in time units)
vluint64_t main_time = 0;

// Called by $time in Verilog
double sc_time_stamp() {
    return main_time;
}

// A helper function to toggle the clock and advance simulation time.
void tick(VAlu64* top) {
    // Falling edge
    top->clock = 0;
    top->eval();
    main_time += 5;

    // Rising edge
    top->clock = 1;
    top->eval();
    main_time += 5;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    VAlu64* top = new VAlu64;

    // Assert reset for a few cycles
    top->reset = 1;
    for (int i = 0; i < 2; i++) {
        tick(top);
    }
    top->reset = 0;

    // -----------------------------
    // Test 1: Unsigned 8-bit Addition
    // 0x12 + 0x34 = 0x46
    //
    // For arithmetic operations, the opcode bits are interpreted as follows:
    // - Bit 5: 0 => arithmetic operation.
    // - Bit 3: 0 => addition.
    // - Bit 2: determines signedness (0 for unsigned).
    // - Bits [1:0]: operand size; 00 means 8-bit.
    //
    top->io_a     = 0x12;
    top->io_b     = 0x34;
    top->io_opcode = 0x00;  // 6'b000000: arithmetic, add, unsigned, 8-bit.
    tick(top);
    std::cout << "Test 1: 0x12 + 0x34 = 0x" 
              << std::hex << top->io_result << std::dec << std::endl;

    // -----------------------------
    // Test 2: Unsigned 8-bit Subtraction
    // 0x34 - 0x12 = 0x22
    //
    // For subtraction, set bit 3 = 1 (with arithmetic mode still active)
    top->io_a     = 0x34;
    top->io_b     = 0x12;
    top->io_opcode = 0x08;  // 6'b00_1_000: arithmetic, subtract, unsigned, 8-bit.
    tick(top);
    std::cout << "Test 2: 0x34 - 0x12 = 0x" 
              << std::hex << top->io_result << std::dec << std::endl;

    // -----------------------------
    // Test 3: Addition with Carry Out
    // 0xFF + 0x01 = 0x00 with carry (unsigned 8-bit addition)
    top->io_a     = 0xFF;
    top->io_b     = 0x01;
    top->io_opcode = 0x00;  // Same as Test 1 for unsigned addition.
    tick(top);
    std::cout << "Test 3: 0xFF + 0x01 = 0x" 
              << std::hex << top->io_result 
              << "  CarryOut: " << top->io_carryOutFlag << std::dec << std::endl;

    // -----------------------------
    // Test 4: Logical AND (8-bit)
    //
    // For logical operations, bit 5 = 1.
    // The lower bits [4:2] select the logical function.
    // For AND, set bits [4:2] = 000.
    // Operand size remains 8-bit (bits [1:0] = 00).
    //
    top->io_a     = 0xAA;
    top->io_b     = 0x55;
    top->io_opcode = 0x20;  // 6'b1_000_00: logical AND, 8-bit.
    tick(top);
    std::cout << "Test 4: 0xAA & 0x55 = 0x" 
              << std::hex << top->io_result << std::dec << std::endl;

    // -----------------------------
    // Test 5: Logical OR (8-bit)
    //
    // For OR, set bits [4:2] = 001.
    top->io_a     = 0xAA;
    top->io_b     = 0x55;
    top->io_opcode = 0x24;  // 6'b1_001_00: logical OR, 8-bit.
    tick(top);
    std::cout << "Test 5: 0xAA | 0x55 = 0x" 
              << std::hex << top->io_result << std::dec << std::endl;

    // Finish simulation
    top->final();
    delete top;
    return 0;
}
