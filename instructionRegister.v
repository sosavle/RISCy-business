`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:17:13 11/15/2020 
// Design Name: 
// Module Name:    instructionRegister 
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
module instructionRegister(
    input clk,
    input reset,
    input IL, // Instruction Load
	 input [instructionWidth-1:0] IR, // Instruction to Load
    output reg [opcodeBegin:opcodeEnd] opcode,
	 output reg [dBegin:dEnd] DA,
	 output reg [aBegin:aEnd] AA,
	 output reg [bBegin:bEnd] BA
    );
	 
	localparam instructionWidth = 16;
	localparam opcodeBegin = 15;
	localparam opcodeEnd = 12;
	localparam dBegin = 11;
	localparam dEnd = 8;
	localparam aBegin = 7;
	localparam aEnd = 4;
	localparam bBegin = 3;
	localparam bEnd = 0;
	
	reg [instructionWidth-1:0] currentInstruction;
	
	always @(IL) begin
		if(IL == 1) begin
			opcode <= IR[opcodeBegin:opcodeEnd];
			DA <= IR[dBegin:dEnd];
			AA <= IR[aBegin:aEnd];
			BA <= IR[bBegin:bEnd];
		end
	end


endmodule
