## What is this?
This repository contains the design files of a 16 bit RISC processor designed in Verilog-HDL. The 16 bit RISC processor architecture features 16 bit instruction words, 16 internal general-purpose registers, and 6 external address lines to a ROM and 6 external address lines to an external memory (RAM).

## Features
Features of the processor can be summarized as follows;
* 16-bit RISC microprocessor based on a simplified version of the MIPS architecture
* Every instruction is completed in two cycles
* 16 instructions in the instruction set architecture.
* 16 general purpose registers.
* 6 external address lines to a ROM and 6 external address lines to a RAM
* 16 data lines to a ROM and 16 data lines to a RAM
* One bit execution complete line

## Pin descriptions
table here

## Instruction set architecture
table here

1) Arithmetic (Two’s Complement) ALU operation
* ADD: Rd = Rs + Rt
* SUB: Rd = Rs - Rt

2) Logical ALU operation (6)
* AND: Rd = Rs & Rt
* OR: Rd = Rs | Rt
* XOR: Rd = Rs ^ Rt
* NOT: Rd = ~Rs
* SLA: Rd = Rs << 1
* SRA: Rd = Rs >> 1

3.Memory operations (3)
* LI: Rd = 8-bit Sign extended Immediate
* LW: Rd = Mem[Rs[5:0]]
* SW: Mem[ Rs[5:0] ] = Rt

4.Conditional Branch operations (2)
* BIZ: PC = PC + 1 + Offset if Rs = 0
* BNZ: PC = PC + 1 + Offset if Rs != 0

5.Program Count Jump operations (3)
* JAL: Rd = PC + 1 and PC = PC + 1 + Offset
* JMP: PC = PC + 1 + Offset
* JR: PC = Rs
* EOE: End of execution
