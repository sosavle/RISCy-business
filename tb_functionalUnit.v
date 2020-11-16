`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:16:32 11/15/2020
// Design Name:   functionalUnit
// Module Name:   C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/tb_functionalUnit.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: functionalUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_functionalUnit;

	// Inputs
	reg [14:0] inS;
	reg [14:0] inT;
	reg [2:0] functionSelect;

	// Outputs
	wire [14:0] result;

	// Instantiate the Unit Under Test (UUT)
	functionalUnit uut (
		.inS(inS), 
		.inT(inT), 
		.functionSelect(functionSelect), 
		.result(result)
	);
	

	initial begin
		// Initialize Inputs
		inS = 0;
		inT = 0;
		functionSelect = 0;
        
		// Add stimulus here
		inS = -5;
		inT = 12;
	end
	
	always #10 functionSelect = functionSelect + 1;
      
endmodule

