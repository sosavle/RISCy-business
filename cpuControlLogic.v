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
	 output reg [bcWidth-1:0] BC,  // Branch condition
	 output reg IL,   // Instruction Load
	 output reg EOE // End of Execution
    );
	 
	 localparam opcodeWidth = 4;
	 localparam psWidth = 2;
	 localparam rdWidth = 4;
	 localparam fsWidth = 3;
	 localparam bcWidth = 2;
	 localparam resultSourceWidth = 2;
	 
	 localparam S_FETCH = 0;
	 localparam S_EXECUTE = 1;
	 
	 localparam PC_HOLD = 0;
	 localparam PC_INCREMENT = 1;
	 localparam PC_REL_JUMP = 2;
	 localparam PC_ABS_JUMP = 3;
	 
	 localparam BC_ZERO = 0;
	 localparam BC_NZERO = 1;
	 //localparam BC_NEGATIVE = 2;
	 localparam BC_ALWAYS = 3;
	 
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
	 
	// Control State Register
	/*always@(posedge clk) begin
		if(reset == 1) begin
			firstInstruction = 1;
			completedFirst = 0;
			S = S_EXECUTE;
		end else begin
			S = NS;
		end
		if(completedFirst == 1) begin
			firstInstruction = 0;
		end
	end */

	/*always@(S, EOE, firstInstruction) begin
		if(firstInstruction || EOE) begin
			NS <= S_FETCH;
			IL <= 0;
		end else begin
			NS <= ~S;
			IL <= ~S;
		end
	end*/
	
	always@(posedge clk) begin
		if(reset == 1) begin
			S <= S_FETCH;
			NS <= S_EXECUTE;
			RW <= 0;
			MW <= 0;
			PS <= 0;
			IL <= 0;
			FS <= 0;
			resultSource <= 0;
			BC <= BC_ALWAYS;
			MB <= 0;
		end else begin
			// Default assingments, only differing ones specified in if-else
			PS <= {1'b0,S}; 
			FS <= 0; 
			MB <= 0; 
			resultSource <= SOURCE_F; 
			RW <= S; 
			MW <= 0;
			BC <= BC_ALWAYS;
			EOE <= 0;
			S <= NS;
			NS <= S;
			IL <= ~S;
			
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
				if(S == S_EXECUTE) begin
					MW <= 1;
				end
			end
			
			// Branch
			else if(opcode == BIZ) begin
				if(S == S_EXECUTE) begin
					PS <= PC_REL_JUMP;
				end
				BC <= BC_ZERO;
				RW <= 0;
			end else if(opcode == BNZ) begin
				if(S == S_EXECUTE) begin
					PS <= PC_REL_JUMP;
				end
				BC <= BC_NZERO;
				RW <= 0;
			end 
			
			// Jump
			else if(opcode == JAL) begin
				//if(S == S_FETCH) begin
					if(S == S_EXECUTE) begin
						PS <= PC_REL_JUMP;
					end
					resultSource <= SOURCE_PC;
					//RW <= 1;
				//end else begin
					
				//	PS <= PC_HOLD;
				//end
			end else if(opcode == JMP) begin
				if(S == S_EXECUTE) begin
						PS <= PC_REL_JUMP;
				end
				RW <= 0;
			end else begin //opcode JR or EOE
				if(Rd == 0) begin
					if(S == S_EXECUTE) begin
						PS <= PC_ABS_JUMP;
					end
					RW <= 0;
				//end else if(firstInstruction) begin //Reading the very first instruction
					//NS <= S_FETCH;
					//IL <= 1;
				end else if(Rd == 4'hF) begin
					PS <= PC_HOLD;
					EOE <= 1;
					RW <= 0;
				end 
			end	
		end
	end

endmodule
