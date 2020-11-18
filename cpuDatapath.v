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
	 input [resultSourceWidth-1:0] resultSource,
	 input RW,
	 input [memInWidth-1:0] MemIn,
	 input [busSize-1:0] PC,
	 
	 output [busSize-1:0] Dout, // Value at the destination register (For use with branching)
	 output MemAddr 
    );
	 
	localparam busSize = 16;
	localparam addressWidth = 4;
	localparam opcodeWidth = 4;
	localparam memInWidth = 16;
	localparam fsWidth = 3;
	localparam resultSourceWidth = 2;
	//localparam memAddressWidth = 6;
	
	localparam SOURCE_F = 0;
	localparam SOURCE_PC = 1;
	localparam SOURCE_RAM = 2;
	localparam SOURCE_IMMEDIATE = 3;

	 
	 wire [busSize-1:0] Aout;
	 wire [busSize-1:0] Bout;
	 wire [busSize-1:0] inT = MB? BA : Bout;
	 wire [busSize-1:0] F;
	 reg [busSize-1:0] result;
	 
	 always @(resultSource, F, PC, MemIn) begin
		case(resultSource)
			SOURCE_F: result <= F;
			SOURCE_PC: result <= PC;
			SOURCE_RAM: result <= MemIn;
			default: result <= { {busSize/2{AA[addressWidth-1]}}, AA, BA};
		endcase
	 end

	 
	 registerFile regFile(
		 .clk(clk),
		 .reset(reset),
		 .DA(DA),
		 .result(result), 
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
