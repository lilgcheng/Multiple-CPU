`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:11:21 05/11/2016 
// Design Name: 
// Module Name:    ALUOut 
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
module ALUOut(
  	input [DATA_WIDTH - 1: 0] Data_inp,
	output reg [DATA_WIDTH - 1 : 0] Data_outp
    );
	
	parameter DATA_WIDTH = 32;

	always @ (Data_inp) begin
		Data_outp <= Data_inp;
	end

endmodule
