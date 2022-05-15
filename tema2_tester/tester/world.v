`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:        UPB
// Engineer:       Dan Dragomir
//                 Sergiu Duda
//
// Create Date:    11:23:41 11/20/2021
// Design Name:    tester tema2
// Module Name:    world
// Project Name:   tema2
// Target Devices: ISim
// Tool versions:  14.7
// Description:    tester for homework 2: Maze solver
////////////////////////////////////////////////////////////////////////////////

module world(
    input           clk,            // synchronization signal
    input [5:0]     row,            // row index of cell to be read/written
    input [5:0]     col,            // col index of cell to be read/written
    input           oe,             // output enable: 1 - cell is read
    input           we,             // write enable: 1 - cell is marked
    output reg      out,            // when reading: current cell value
    output [1:0]    show_out,       // current cell full value
    output reg      match);         // match signal: 1 - data matches solution

parameter init = 1;                 // init data: 0 - don't init, 1 - init

reg[1:0] data[63:0][63:0];          // storage for world data
reg[1:0] sol[63:0][63:0];           // storage for solution

integer data_file;                  // initialization file handle
integer aux;                        // auxiliary needed to read skipped data
integer i, j;
initial begin
    if(init) begin
        // open file
        data_file = $fopen("test.data", "r");
        if(!data_file) begin
            $write("error opening data file\n");
            $finish;
        end

        // skip starting_row
        if($fscanf(data_file, "starting_row=%d\n", aux) != 1) begin
            $write("error reading starting_row value\n");
            $finish;
        end

        // skip starting_col
        if($fscanf(data_file, "starting_col=%d\n", aux) != 1) begin
            $write("error reading starting_col value\n");
            $finish;
        end

        // init data
        for(i = 0; i < 64; i = i + 1) begin
            for(j = 0; j < 64; j = j + 1) begin
                // read data from file
                if($fscanf(data_file, "%d\n", data[i][j]) != 1) begin
                    $write("error reading test data\n");
                    $finish;
                end
            end
        end
        
        // close file
        $fclose(data_file);
        
        // open file
        data_file = $fopen("sol.data", "r");
        if(!data_file) begin
            $write("error opening solution file\n");
            $finish;
        end

        // skip starting_row
        if($fscanf(data_file, "starting_row=%d\n", aux) != 1) begin
            $write("error reading solution starting_row value\n");
            $finish;
        end

        // skip starting_col
        if($fscanf(data_file, "starting_col=%d\n", aux) != 1) begin
            $write("error reading solution starting_col value\n");
            $finish;
        end

        // init solution
        for(i = 0; i < 64; i = i + 1) begin
            for(j = 0; j < 64; j = j + 1) begin
                // read solution from file
                if($fscanf(data_file, "%d\n", sol[i][j]) != 1) begin
                    $write("error reading solution data\n");
                    $finish;
                end
            end
        end

        // close file
        $fclose(data_file);
    end
end

// marking and reading are synchronous
always @(posedge clk) begin
    if(oe)
        out <= data[row][col][0];
    if(we)
        data[row][col] <= 2;
end

// world displaying is asynchronous
assign show_out = data[row][col];

// match signal is computed continuously
integer r, c;
always @(*) begin
    match = 1;
    for(r = 0; r < 64; r = r + 1) begin
        for(c = 0; c < 64; c = c + 1) begin
            if(data[r][c] != sol[r][c]) begin
                match = 0;
             end
         end
    end
end

endmodule

