`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:08:24 12/01/2021 
// Design Name: 
// Module Name:    maze 
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
module maze(
	input 		          	  		clk,
	input [maze_width - 1:0]  		starting_col, starting_row, 	// indicii punctului de start
	input  			  			  		maze_in, 							// oferã informatii despre punctul de coordonate [row, col]
	output reg [maze_width - 1:0] row, col,	 						// selecteazã un rând si o coloanã din labirint
	output reg			  			 	maze_oe,								// output enable (activeazã citirea din labirint la rândul si coloana date) - semnal sincron	
	output reg			  			  	maze_we, 							// write enable (activeazã scrierea în labirint la rândul si coloana  date) - semnal sincron
	output reg			  			 	done);		 						// iesirea din labirint a fost gasitã; semnalul rãmane activ 

	parameter maze_width = 6;
	reg [5:0] state, next_state;
	reg [3:0] path;
	reg [5:0] rowr, colc;
	
	`define up 	  0
	`define down  1
	`define left  2
	`define right 3
	
	`define start 			0
	`define left_wall		1
	`define rotation_m	2
	`define front_wall	3
	`define rotation		4
	`define forward		5
	
	always @(posedge clk) begin // partea secventiala
		state <= next_state;
	end
	
	always @(*) begin // partea combinationala
		maze_oe = 0;
		maze_we = 0;
		done = 0;
		case(state)
			`start:
			begin
				row= rowr;
				col = colc;
				maze_we = 1;
				if(colc == 0 || colc == 63 || rowr == 0 || rowr == 63) begin 
					done = 1;
				end else begin // daca am 0 dar nu sunt pe margine continui
					next_state = `left_wall;
				end
			end
			`left_wall:
			begin
				case(path)
					`up: begin
						row = row;
						col = col - 1;
					end
					`down: begin
						row = row;
						col = col + 1;
					end
					`left: begin
						row = row - 1;
						col = col;
					end
					`right: begin
						row = row + 1;
						col = col;
					end
				endcase
				maze_oe=1;
				next_state=`rotation_m;
			end
			`rotation_m: 
			begin
				if(maze_in==0)
				begin
					if(path == `up) 
					begin
						path = `left;
						colc = colc - 1;
					end else if(path == `down) begin
						path = `right;
						colc = colc + 1;
					end else if(path == `left) begin
						path = `down;
						rowr = rowr - 1;
					end else if(path == `right) begin
						path = `up;
						rowr = rowr + 1;
					end
					next_state = `start;
				end
				if(maze_in==1) begin
					next_state=`front_wall;
				end
			end
			`front_wall:
			begin
				case(path)
					`up: begin
						row = row + 1;
						col = col;
					end
					`down: begin
						row = row - 1;
						col = col;
					end
					`left: begin
						row = row;
						col = col - 1;
					end 
					`right: begin
						row = row;
						col = col + 1;
					end
				endcase
				maze_oe=1;
				next_state=`rotation;
			end
			`rotation:
			begin
				if(maze_in==1) begin
					if(path == `up) begin
						path = `right;
					end else if(path == `down) begin
						path = `left;
					end else if(path == `left) begin
						path = `up;
					end else if(path == `right) begin
						path = `down;
				end
			end
				if(maze_in==0) begin
					if(path == `up) begin
						rowr = rowr + 1;
					end else if(path == `down) begin
						rowr = rowr - 1;
					end else if(path == `left) begin
						colc = colc - 1;
					end else if(path == `right) begin
						colc = colc + 1;
					end
				end
				next_state = `start;
			end			
			default: 
			begin
				path = `up;
				rowr = starting_row;
				colc = starting_col;
				next_state = `start;
			end
		endcase
	end
endmodule
