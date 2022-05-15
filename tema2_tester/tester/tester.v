`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Dan Dragomir
//
// Create Date:   11:23:41 11/20/2021
// Design Name:   tester tema2
// Module Name:   tester
// Project Name:  tema2
// Target Device: ISim
// Tool versions: 14.7
// Description:   tester for homework 2: Maze solver
////////////////////////////////////////////////////////////////////////////////

module tester;

parameter show_world = 0;                   // boolean; show world at end

reg[16*8-1:0] test_name;
real test_value;
real test_penalty;
integer max_cycles;                         // maximum cycles to wait for one world update
reg[5:0] starting_row;                      // starting row for solver
reg[5:0] starting_col;                      // starting column for solver

integer config_file;
initial begin
    config_file = $fopen("test.config", "r");
    if(!config_file) begin
        $write("error opening config file\n");
        $finish;
    end
    if($fscanf(config_file, "name=%16s\n", test_name) != 1) begin
        $write("error reading test name\n");
        $finish;
    end
    if($fscanf(config_file, "value=%f\n", test_value) != 1) begin
        $write("error reading test value\n");
        $finish;
    end
    if($fscanf(config_file, "penalty=%f\n", test_penalty) != 1) begin
        $write("error reading test penalty\n");
        $finish;
    end
    if($fscanf(config_file, "max_cycles=%d\n", max_cycles) != 1) begin
        $write("error reading allowed maximum cycles for one world update\n");
        $finish;
    end
    $fclose(config_file);
    
    config_file = $fopen("sol.data", "r");
    if(!config_file) begin
        $write("error opening solution file\n");
        $finish;
    end
    if($fscanf(config_file, "starting_row=%d\n", starting_row) != 1) begin
        $write("error reading solution starting_row value\n");
        $finish;
    end
    if($fscanf(config_file, "starting_col=%d\n", starting_col) != 1) begin
        $write("error reading solution starting_col value\n");
        $finish;
    end
    $fclose(config_file);
end

// Instantiate the Unit Under Test (UUT)
wire      tst_solver_clk, tst_world_clk;
wire[5:0] tst_solver_row, tst_world_row;
wire[5:0] tst_solver_col, tst_world_col;
wire      tst_solver_oe, tst_world_oe;
wire      tst_solver_we, tst_world_we;
wire      tst_solver_in, tst_world_out;
wire[1:0] tst_world_show;
wire      tst_solver_done;
wire      tst_world_match;

reg clk;                                    // master clock

reg[11:0] cell;                             // cell being shown
wire[5:0] row;                              // row being shown
wire[5:0] col;                              // column being shown

reg tst_prev_done;                          // previous value of tst_solver_done
reg tst_finished;                           // true if tst finished solving the maze

integer state;                              // tester FSM state
`define START       0                       // prepare to run
`define RUN         1                       // run solver
`define CHECK       2                       // check solution
`define RESULT      4                       // write results

integer solution_cycles;                    // cycles used by tst for finding the solution

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file

initial begin
    // initialize inputs
    clk = 0;
    
    state = `START;
end

always #5 clk = !clk;

assign row = cell[11:6];
assign col = cell[ 5:0];

// in the CHECK state world clock is controlled by tester
//assign tst_world_clk = (state == `CHECK) ? clk : tst_solver_clk;

world #(.init(1)) tst_world(
    .clk(clk),
    .row(tst_solver_row),
    .col(tst_solver_col),
    .oe(tst_solver_oe),
    .we(tst_solver_we),
    .out(tst_solver_in),
    .show_out(tst_world_show),
    .match(tst_world_match));

// in the RUN state solver clock is active until the solution is computed
//assign tst_solver_clk = (state == `RUN && !tst_finished) ? clk : 0;

// in states other than RUN, solver in is tied to a constant value
//assign tst_solver_in = (state == `RUN) ? tst_world_out : 0;

maze tst_solver(
    .clk(clk),
    .starting_row(starting_row),
    .starting_col(starting_col),
    .row(tst_solver_row),
    .col(tst_solver_col),
    .maze_in(tst_solver_in),
    .maze_oe(tst_solver_oe),
    .maze_we(tst_solver_we),
    .done(tst_solver_done));

// Tester

// in the CHECK state world row is controlled by tester
//assign tst_world_row = (state == `CHECK) ? row : tst_solver_row;

// in the CHECK state world col is controlled by tester
//assign tst_world_col = (state == `CHECK) ? col : tst_solver_col;

// in the CHECK state world oe is controlled by tester
//assign tst_world_oe = (state == `CHECK) ? 1'b0 : tst_solver_oe;

// in the CHECK state world we is controlled by tester
//assign tst_world_we = (state == `CHECK) ? 1'b0 : tst_solver_we;

always @(posedge clk) begin
    tst_prev_done <= tst_solver_done;
    
    case(state)
        `START: begin
            $write("--------------------------------------------------------------------------------\n");
            
            tst_finished <= 0;                  // tst not finished yet
            
            solution_cycles <= 0;

            state <= `RUN;
        end
        
        `RUN: begin
            // positive edge of done
            tst_finished <= tst_finished || ((tst_prev_done!==1) && (tst_solver_done===1));    // uut might generate "x"
            
            if(!tst_finished) begin
                // tst is not done yet
                solution_cycles <= solution_cycles + 1;
            end
            
            if(tst_finished) begin
                // print number of cycles for current update
                $write("done in %0d cycles\n", solution_cycles);
                
                cell <= 0;
                
                state <= `CHECK;
            end
            else begin
                // kill it if it's stuck
                if(solution_cycles >= max_cycles) begin
                    // print timeout message
                    $write("timeout after %0d cycles\n", solution_cycles);
                    
                    state <= `RESULT;
                end
            end
        end
        
        `CHECK: begin
            if(show_world) begin
                // start printing world
                if(cell == 0)
                    $write("\tworld: ");
            
                if(col == 0)
                    $write("\n\t");

                $write("%d", tst_world_show);

                // terminate world printing                
                if(&cell)
                    $write("\n");
            end
            
            cell <= cell + 1;
            
            if(&cell) begin
                state <= `RESULT;
            end
        end
        
        `RESULT: begin
            $write("--------------------------------------------------------------------------------\n");
            
            percentage = tst_world_match * 1.0 / 1;
            grade = percentage;
            
            // print results
            file = $fopen("result.tester");
            $fwrite(file, "%6.2f: test %0s %0s\n",
                test_value * (grade - test_penalty),
                test_name,
                tst_world_match ? "ok" : "failed");
            $fclose(file);
            $finish;
        end
    endcase
end

endmodule

