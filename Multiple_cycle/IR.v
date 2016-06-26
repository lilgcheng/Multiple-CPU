`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:58:57 05/06/2016 
// Design Name: 
// Module Name:    IR 
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
module IR(
	input IRWrite,
	input [31: 0] in_inst,
	output [5 : 0] inst31_26,//rs 31-26
	output [25 : 0] inst25_0,//25-0
	output [4 : 0] inst25_21,//rt 25-21
	output [4 : 0] inst20_16,//rd 20-16
	output [15 : 0] inst15_0,//15-0
	output [4 : 0] inst15_11,//15-11
	output [5 : 0] inst5_0,//5-0
	output [4 : 0] inst10_6
    );
	reg [31 :0] temp_store;//one 32bit register
	
	assign inst31_26 = (IRWrite) ? in_inst[31:26] : temp_store[31:26] ;
	assign inst25_0 = (IRWrite) ? in_inst[25:0] : temp_store[25:0] ;
	assign inst25_21 = (IRWrite) ? in_inst[25:21] : temp_store[25:21] ;
	assign inst20_16 = (IRWrite) ? in_inst[20:16] : temp_store[20:16] ;
	assign inst15_0 = (IRWrite) ? in_inst[15:0] : temp_store[15:0] ;
	assign inst15_11 = (IRWrite) ? in_inst[15:11] : temp_store[15:11] ;
	assign inst5_0 = (IRWrite) ? in_inst[5:0] : temp_store[5:0] ;
	assign inst10_6 = (IRWrite) ? in_inst[10:6] : temp_store[10:6] ;
	
	always @( IRWrite or in_inst) begin
		if(IRWrite)
			temp_store <= in_inst;
	end

endmodule
