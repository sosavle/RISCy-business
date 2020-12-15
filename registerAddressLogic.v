`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:18:29 11/15/2020 
// Design Name: 
// Module Name:    registerAddressLogic 
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
module registerAddressLogic(
    input [addressWidth-1:0] DR, 
    input [addressWidth-1:0] SA,
    input [addresWidth-1:0] SB,
    input [addresWidth-1:0] AX,
    input [addresWidth-1:0] BX,
    input [addresWidth-1:0] DX,
    output [addresWidth-1:0] DA,
    output [addresWidth-1:0] AA,
    output [addresWidth-1:0] BA
    );
	 
	 parameter addressWidth = 16;


endmodule
