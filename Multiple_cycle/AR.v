`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:33:36 05/11/2016 
// Design Name: 
// Module Name:    AR 
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
module AR(
   	input [DATA_WIDTH - 1 : 0] data_inp,
	output reg [DATA_WIDTH - 1: 0] data_outp
    );

	parameter DATA_WIDTH = 32;
	
	always @(data_inp) begin
		data_outp <= data_inp;
	end

endmodule
