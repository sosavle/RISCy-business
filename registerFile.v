`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:10:08 11/15/2020 
// Design Name: 
// Module Name:    registerFile 
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
module registerFile(
	 input clk,
	 input reset,
	 
    input [addressWidth-1:0] DA, // Destination address
	 input [registerDataWidth-1:0] result, // Value to write to destination address
    input [addressWidth-1:0] AA, // Address to read as operand A
    input [addressWidth-1:0] BA, // Address to read as operand B
	 input RW, // Read or write to register file
    output reg [registerDataWidth-1:0] Aout,
    output reg [registerDataWidth-1:0] Bout,
	 output reg [registerDataWidth-1:0] Dout
    );
	
	localparam addressWidth = 4;
	localparam numRegisters = 2**addressWidth;
	localparam registerDataWidth = 16;
	localparam READ = 1'b0;
	localparam WRITE = 1'b1;
	
	reg [numRegisters-1:0] userRegisters[registerDataWidth-1:0];
	integer i; //Used to address each register
	
	always@(posedge clk) begin
		if(reset == 1) begin
			for(i=0; i<numRegisters; i=i+1) begin
				userRegisters[i] <= i; // Initialize registers with their index value
			end
		end
		if(RW == READ) begin
			Aout <= userRegisters[AA];
			Bout <= userRegisters[BA];
			Dout <= userRegisters[DA];
		end else if(reset == 0) begin
			userRegisters[DA] <= result;
		end
	end

endmodule
