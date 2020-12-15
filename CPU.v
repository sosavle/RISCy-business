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
 
module CPU( 
	input [15:0] data_from_rom, // Instruction data that should be fed to IR
	input reset,
	input clk,
	inout [15:0] data_ram, // Data available for MEM operations
	output [5:0] address_to_rom,
	output enable_to_rom, 
	output write_enable_to_ram, //enable write
	output [5:0] address_to_ram,
	output read_enable_to_ram,
	output enable_ram_read //enable signal for ram read and UART module. This signal indicates that all
	//operations of the 'CPU' are finished.
);
	localparam memInWidth = 16;
	localparam memAddrWidth = 6;
	localparam busSize = 16;
	localparam addressWidth = 4;
	localparam fsWidth = 3;
	localparam resultSourceWidth = 2;

	
	wire [busSize-1:0] IR;
	wire [addressWidth-1:0] DA;
	wire [addressWidth-1:0] AA;
	wire [addressWidth-1:0] BA;
	wire [memAddrWidth-1:0] PC; 
	//wire [busSize-1:0] D;
	wire [fsWidth-1:0] FS;
	wire [memInWidth-1:0] MemIn;
	wire [resultSourceWidth-1:0] resultSource;
	wire [busSize-1:0] D;
	wire [busSize-1:0] A;
	
	assign read_enable_to_ram = ~MW;
	assign address_to_rom = PC[memAddrWidth-1:0];
	assign write_enable_to_ram = MW;
	
	cpuController controller(
		.clk(clk),
		.reset(reset),
		.D(D),
		.A(A),
		.IR(data_from_rom),
		.PC(PC),
		.DA(DA),
		.AA(AA),
		.BA(BA),
		.FS(FS),
		.MB(MB),
		.resultSource(resultSource),
		.RW(RW),
		.MW(MW),
		.IL(enable_to_rom),
		.EOE(enable_ram_read)
	);
	
	cpuDatapath datapath(
		.clk(clk),
		.reset(reset),
		.DA(DA),
		.AA(AA),
		.BA(BA),
		.FS(FS),
		.MB(MB),
		.resultSource(resultSource),
		.RW(RW),
		.MW(MW),
		.MemInOut(data_ram),
		.PC(PC),
		.Dout(D),
		.Aout(A),
		.memAddr(address_to_ram) 
	);

endmodule
