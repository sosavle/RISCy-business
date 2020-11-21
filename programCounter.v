`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:44 11/15/2020 
// Design Name: 
// Module Name:    programCounter 
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
module programCounter(
	 input clk,
    input reset,
	 input [bcWidth-1:0] BC, 	// Branch Condition
    input [psWidth-1:0] PS, // PC Update Style
	 input [dWidth-1:0] D, // Value of destination register
	 input [aWidth-1:0] A,
	 input [aaWidth-1:0] AA, // First half of offset
	 input [baWidth-1:0] BA, // Second half of offset
    output reg [memInWidth-1:0] instructionAddress
    );
	
	localparam psWidth = 2;
	localparam offsetWidth = 8;
	localparam jumpAddressWidth = 4;
	localparam memInWidth = 6;
	localparam dWidth = 16;
	localparam aaWidth = 4;
	localparam baWidth = 4;
	localparam aWidth = 16;
	localparam bcWidth = 2;
	
	localparam PC_HOLD = 0;
	localparam PC_INCREMENT = 1;
	localparam PC_REL_JUMP = 2;
	localparam PC_ABS_JUMP = 3;
	
	
	
	localparam BC_ZERO = 0;
	localparam BC_NZERO = 1;
	//localparam BC_NEGATIVE = 2; 
	localparam BC_ALWAYS = 3;
	
	
	wire signed [offsetWidth-1:0] offset = {AA, BA};

	always@(posedge clk) begin
		
		// Reset
		if(reset == 1) begin
			instructionAddress <= 0;
		end 
		
		// Update program counter
		else begin
			// Default behavior is to PC = PC
			instructionAddress <= instructionAddress;
			
			if (BC == BC_ALWAYS || BC == (|D)) begin
				case(PS)
					PC_REL_JUMP:
					instructionAddress <= instructionAddress + offset;
					
					PC_ABS_JUMP:
						instructionAddress <= A[memInWidth:0];
				
					PC_INCREMENT:
						instructionAddress <= instructionAddress + 1;
				endcase	
			end
			
			/*case(PS)
				PC_REL_JUMP:
					if(BC == BC_ALWAYS || BC == (|D)) begin
						instructionAddress <= instructionAddress + offset;
					end 
					
				PC_ABS_JUMP:
					if(BC == BC_ALWAYS || BC == (|D)) begin
						instructionAddress <= A[memInWidth:0];
					end
				
				PC_INCREMENT:
					if(BC == BC_ALWAYS || BC == (|D)) begin
						instructionAddress <= instructionAddress + 1;
					end
			endcase*/
		end
	end

endmodule
