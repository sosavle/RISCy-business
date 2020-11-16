`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:32:21 11/15/2020 
// Design Name: 
// Module Name:    cpuDatapath 
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
module cpuDatapath(
    input clk,
	 input reset,
	 input [addressWidth-1:0] DA,
	 input [addressWidth-1:0] AA,
	 input [addressWidth-1:0] BA,
	 input [fsWidth-1:0] FS,
	 input MB,
	 input MD, // Input from Mem
	 input BL,
	 input RW,
	 input [memInWidth-1:0] MemIn,
	 input [busSize-1:0] PC,
	 
	 output [busSize-1:0] Dout, // Value at the destination register (For use with branching)
	 output MemAddr 
    );
	 
	localparam busSize = 16;
	localparam addressWidth = 4;
	localparam opcodeWidth = 4;
	localparam memInWidth = 6;
	localparam fsWidth = 3;

	 
	 wire [busSize-1:0] Aout;
	 wire [busSize-1:0] Bout;
	 wire [busSize-1:0] inT = MB? Bout : BA;
	 wire [busSize-1:0] F;
	 
	 // {MD,BL} == 0 --> D = F
    //         == 1 --> D = PC
    //         == 2 --> D = ROM_In
    //         == 3 --> D = RAM_In
	 wire [busSize-1:0] D = MD? (BL? F : PC) : (BL? MemIn : 0);

	 
	 registerFile regFile(
		 .clk(clk),
		 .reset(reset),
		 .DA(DA),
		 .D(D), 
		 .AA(AA),
		 .BA(BA),
		 .RW(RW),
		 .Aout(Aout),
		 .Bout(Bout),
		 .Dout(Dout)
	 );
	 
	 functionalUnit fUnit(
		 .inS(Aout), 
		 .inT(inT), 
		 .FS(FS),
		 .F(F)
	 );
	 
	 


endmodule
