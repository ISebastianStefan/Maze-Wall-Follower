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

	input 	        clk,
	input [5:0]      starting_col, starting_row, 	// indicii punctului de start
	input  		  maze_in, 								// oferã informatii despre punctul de coordonate [row, col]
	output reg [5:0] row, col,	 							// selecteazã un rând si o coloanã din labirint
	output reg 		  maze_oe,			// output enable (activeazã citirea din labirint la rândul si coloana date) - semnal sincron	
	output reg		  maze_we, 			// write enable (activeazã scrierea în labirint la rândul si coloana date) - semnal sincron
	output reg		  done);		 		// ie?irea din labirint a fost gasitã; semnalul rãmane activ 

	reg [6:0] state, next_state;
	reg [3:0] directie;
	reg [5:0] x,y;
	
	`define S 0
	`define E 1
	`define N 2
	`define V 3
	
	`define Marcare_pozitie 0
	`define Stabilire_directie 1
	`define Verificare_stanga 2
	`define Rotire 3
	`define Mutare 4
	
	always @(posedge clk) 
	begin
		state <= next_state;
	end
	
	always @(*) begin
		maze_oe=0;
		maze_we=0;
		done=0;
		case(state)
			`Marcare_pozitie: begin
				row=x;
				col=y;
				maze_we=1;
				if(y==0 || y==63 || x==0 || x==63) begin
					maze_we = 1;
					done=1;
				end else begin
				next_state=`Stabilire_directie;
				end
			end
			`Stabilire_directie: begin
				case(directie)
					`S: begin 
						row=row;
						col=col+1;
						end			
					`E: begin
						col=col;
						row=row-1;
						end					
					`N: begin
						row=row;
						col=col-1;
						end					
					`V: begin
						col=col;
						row=row+1;
						end
				endcase
				maze_oe=1;
				next_state=`Verificare_stanga;
			end
			`Verificare_stanga: begin
				case(maze_in)
					0: begin
							if(directie==`S)begin
									directie=`E;
									y=y+1;
									end else if(directie==`E)begin
									directie=`N;
									x=x-1;
									end else if(directie==`N)begin
									directie=`V;
									y=y-1;
									end else if(directie==`V)begin
									directie=`S;
									x=x+1;
									end
							next_state=`Marcare_pozitie;
						end
					1: begin
						next_state=`Rotire;
						end
				endcase
			end
			`Rotire: begin
				case(directie)
					`S: begin
						row=row+1;
						col=col;
						end
					`E: begin
						col=col+1;
						row=row;
						end
					`N: begin
						row=row-1;
						col=col;
						end
					`V: begin
						col=col-1;
						row=row;
						end
				endcase
				maze_oe=1;
				next_state=`Mutare;
			end	
			`Mutare: begin 
				case(maze_in)
					1: begin //rotire
							if(directie==`S) begin
								directie=`V;
								end else if(directie==`E)
								begin
								directie=`S;
								end else if(directie==`N)
								begin
								directie=`E;
								end else if(directie==`V)
								begin
								directie=`N;
								end
						next_state=`Marcare_pozitie;
						end
					0: begin //pas inainte
						case(directie)
							`S: begin
								x=x+1;
								end
							`E: begin
								y=y+1;
								end
							`N: begin
								x=x-1;
								end
							`V: begin
								y=y-1;
								end			
						endcase
						next_state=`Marcare_pozitie;
						end
				endcase				
			end		
			default: begin
				x=starting_row;
				y=starting_col;
				directie=`S;
				next_state=`Marcare_pozitie;
		  	end
		endcase
	end
endmodule
