`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:48:49 11/15/2020 
// Design Name: 
// Module Name:    cpuController 
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
module cpuController(
    input clk,
	 input reset,
	 input [busSize-1:0] D,
	 input [busSize-1:0] IR,
	 
	 output [busSize-1:0] PC,
	 output [addressWidth-1:0] DA,
	 output [addressWidth-1:0] AA,
	 output [addressWidth-1:0] BA,
	 output [fsWidth-1:0] FS,
	 output MB,
	 output [resultSourceWidth-1:0] resultSource,
	 output RW,
	 output MW,
	 output IL,
	 output EOE

    );
	 
	localparam busSize = 16;
	localparam addressWidth = 4;
	localparam opcodeWidth = 4;
	localparam fsWidth = 3;
	localparam psWidth = 2;
	localparam resultSourceWidth = 2;
	
	reg controlState;
	wire [opcodeWidth-1:0] opcode;
	wire [psWidth-1:0] PS;
	
	
	instructionRegister instruction(
		.clk(clk),
		.reset(reset),
		.IL(IL),
		.IR(IR),
		.opcode(opcode),
		.DA(DA),
		.AA(AA),
		.BA(BA)
	 );
	
	 cpuControlLogic control(
		 .clk(clk),
		 .reset(reset),
		 .opcode(opcode),
		 .Rd(DA),
		 .FS(FS),
		 .PS(PS),
		 .MB(MB),
		 .resultSource(resultSource),
		 .RW(RW),
		 .MW(MW),
		 .BC(BC),
		 .IL(IL),
		 .EOE(EOE)
    );
	
	programCounter progCount(
	 .clk(clk),
    .reset(reset),
	 .BC(BC), 	
    .PS(PS), 
	 .D(D), 
	 .AA(AA), 
	 .BA(BA), 
    .instructionAddress(PC)
    );

endmodule
