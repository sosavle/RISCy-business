`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:34:43 11/15/2020 
// Design Name: 
// Module Name:    cpuControlLogic 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cpuControlLogic(
	 input clk,
	 input reset,
    input [opcodeWidth-1:0] opcode,
	 input [rdWidth-1:0] Rd, // Destination Register
	 output reg [fsWidth-1:0] FS, // Function Select
	 output reg [psWidth-1:0] PS,  // PC increment/jump
	 output reg MB,  // Immediate value B
	 output reg [resultSourceWidth-1:0] resultSource,  // Data from memory
	 output reg RW,  // Read/Write from/to register file
	 output reg MW,  // Write value from register file into memory
	 output reg BC,  // Branch condition
	 output reg IL,   // Instruction Load
	 output reg EOE // End of Execution
    );
	 
	 localparam opcodeWidth = 4;
	 localparam psWidth = 2;
	 localparam rdWidth = 4;
	 localparam fsWidth = 3;
	 localparam resultSourceWidth = 2;
	 
	 localparam S_FETCH = 0;
	 localparam S_EXECUTE = 1;
	 
	 localparam PC_HOLD = 0;
	 localparam PC_INCREMENT = 1;
	 localparam PC_REL_JUMP = 2;
	 localparam PC_ABS_JUMP = 3;
	 
	 localparam BC_ZERO = 0;
	 localparam BC_NZERO = 1;
	 
	 localparam SOURCE_F = 0;
	 localparam SOURCE_PC = 1;
	 localparam SOURCE_RAM = 2;
	 localparam SOURCE_IMMEDIATE = 3;
	 
		
	 // Arithmetic
	 localparam ADD = 0;
	 localparam SUB = 1;
	 localparam AND = 2;
	 localparam OR = 3;
	 localparam XOR = 4;
	 localparam NOT = 5;
	 localparam SLA = 6;
	 localparam SRA = 7;
	 // Memory
	 localparam LI = 8;
	 localparam LW = 9;
	 localparam SW = 10;
	 // Branch
	 localparam BIZ = 11;
	 localparam BNZ = 12;
	 // Jump
	 localparam JAL = 13;
	 localparam JMP = 14;
	 localparam JR_EOE = 15;
	 
	reg S;  // State
	reg NS; // Next State
	reg firstInstruction;
	 
	// Control State Register
	always@(posedge clk) begin
		if(reset == 1) begin
			firstInstruction = 1;
			S = S_EXECUTE;
		end else begin
			firstInstruction = 0;
			S = NS;
		end
	end 

	always@(S) begin
		if(firstInstruction) begin
			NS <= S_FETCH;
			IL <= 0;
		end else begin
			NS <= ~S;
			IL <= ~S;
		end
	end
	
	always@(S, opcode, Rd) begin
		// Default assingments, only differing ones specified in if-else
		PS <= {0,~S}; 
		FS <= 0; 
		MB <= 0; 
		resultSource <= SOURCE_F; 
		RW <= S; 
		MW <= 0;
		BC <= 0;
		EOE <= 0;


		// Arithmetic
		if(opcode <= SRA) begin
			FS <= opcode[fsWidth-1:0];
		end	
		
		// Memory
		else if(opcode == LI) begin
			MB <= 1; 
			resultSource <= SOURCE_IMMEDIATE; 
			//resultSource <= SOURCE_RAM;
		end else if(opcode == LW) begin
			resultSource <= SOURCE_RAM;
		end else if(opcode == SW) begin
			resultSource <= SOURCE_RAM;
			RW <= 0;
		end
		
		// Branch
		else if(opcode == BIZ) begin
			PS <= PC_REL_JUMP;
			BC <= BC_ZERO;
			RW <= 0;
		end else if(opcode == BNZ) begin
			PS <= PC_REL_JUMP;
			BC <= BC_NZERO;
			RW <= 0;
		end
		
		// Jump
		else if(opcode == JAL) begin
			PS <= PC_ABS_JUMP;
			resultSource <= SOURCE_PC;
		end else if(opcode == JMP) begin
			PS <= PC_REL_JUMP;
			RW <= 0;
		end else begin //opcode JR or EOE
			if(Rd == 0) begin
				PS <= PC_REL_JUMP;
				RW <= 0;
			//end else if(firstInstruction) begin //Reading the very first instruction
				//NS <= S_FETCH;
				//IL <= 1;
			//end else begin // ERROR -- HALT
			//	PS <= PC_HOLD;
			//	NS <= S_FETCH;
			//	IL <= 0;
			//	EOE <= 1;
			end 
		end
		
		if(S == 0) begin
			PS <= 01; 
		end
		
		
	end

endmodule
