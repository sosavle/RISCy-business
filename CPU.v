`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:55:56 11/14/2020 
// Design Name: 
// Module Name:    CPU 
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
 
module CPU( //represent the CPU
	input [15:0] data_from_rom,
	input reset,
	input clk,
	inout [15:1] data_ram,
	output [5:0] address_to_rom,
	output enable_to_rom,
	output write_enable_to_ram, //enable write
	output [5:0] address_to_ram,
	output read_enable_to_ram,
	output enable_ram_read //enable signal for ram read and UART module. This signal indicates that all
	//operations of the 'CPU' are finished.
);
	assign enable_ram_read = 1;
	
	localparam memInWidth = 6;
	localparam busSize = 16;
	localparam addressWidth = 4;
	localparam fsWidth = 3;
	
	wire [busSize-1:0] IR;
	wire [busSize-1:0] PC;
	wire [addressWidth-1:0] DA;
	wire [addressWidth-1:0] AA;
	wire [addressWidth-1:0] BA;
	wire [busSize-1:0] D;
	wire [fsWidth-1:0] FS;
	wire [memInWidth-1:0] MemIn;
	wire [busSize-1:0] Dout;
	
	cpuController controller(
		.clk(clk),
		.reset(reset),
		.D(D),
		.IR(IR),
		.PC(PC),
		.DA(DA),
		.AA(AA),
		.BA(BA),
		.FS(FS),
		.MB(MB),
		.MD(MD),
		.RW(RW),
		.MW(MW),
		.BL(BL)
	);
	
	cpuDatapath datapath(
		.clk(clk),
		.reset(reset),
		.DA(DA),
		.AA(AA),
		.BA(BA),
		.FS(FS),
		.MB(MB),
		.MD(MD), 
		.BL(BL),
		.RW(RW),
		.MemIn(MemIn),
		.PC(PC),
		.Dout(Dout),
		.MemAddr(MemAddr) 
	);

endmodule
