`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:08:37 11/14/2020 
// Design Name: 
// Module Name:    functionalUnit 
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
module functionalUnit(
	 input signed [inputWidth-1:0] inS, // Input Source Value
	 input signed [inputWidth-1:0] inT, // Input Target Value
	 input [fselectWidth-1:0] FS, 		// Function Select
	 output [outputWidth-1:0] F   		// Function Result
	 //output V, // Overflow
	 //output C, // Carry
	 //output N, // Negative
	 //output Z, // Zero
	);

	localparam inputWidth = 16;
	localparam outputWidth = 16;
	localparam fselectWidth = 3;

	localparam ADD = 3'b000;
	localparam SUB = 3'b001;
	localparam AND = 3'b010;
	localparam OR = 3'b011;
	localparam XOR = 3'b100;
	localparam NOT = 3'b101;
	localparam SLA = 3'b110;
	localparam SRA = 3'b111;
	
	reg [outputWidth:0] tempResult ;
	

	always@(inS, inT, FS) begin
		case(FS)
			ADD:  
				 tempResult <= inS + inT;
			SUB:
				 tempResult <= inS - inT;
			AND:
				 tempResult <= inS & inT;
			OR:
				 tempResult <= inS | inT;
			XOR:
				 tempResult <= inS ^ inT;
			NOT:
				 tempResult <=  ~inS;
			SLA:
				 tempResult <= inS << 1;
			SRA:
				 tempResult <= inS >>> 1;
			default:
				 tempResult <= {(outputWidth+1){1'b0}};
		endcase
	end
	
	assign F = tempResult[outputWidth-1:0];



endmodule
