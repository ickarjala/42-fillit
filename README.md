# 42-fillit
by @ikarjala and @staskine @ [Hive Helsinki](https://www.hive.fi/en/)

This is a school project for the coding school Hive Helsinki.
The goal of the program is to parse an input file containing ASCII representations of tetriminos (tetris blocks)
and arrange them to fit inside the smallest possible square.

The version tagged as [old](https://github.com/ickarjala/42-fillit/tree/old) is the first version of the program to pass the project.

## Implementation
Our project uses a recursive solver with 64-bit values to represent tetriminos as well as chunks of the grid;
each 0 or 1 representing free or occupied space in a given position.
This allows us to more effectively both check (via bitwise operations) whether there is room for a tetrimino in a given position on the grid,
as well as place it down on the map or remove it.

We do not rotate the tetriminos as they would be considered different shapes.
We print the tetriminos on the map as alphabet corresponding to the order in the file.

Example :
```
$> ./fillit eval_tests/nom.fillit
ABBBB
A.C..
ACC..
A.C..
$>
```
as the example shows, when there are multiple ways to fit the tetris into an equal-sized square area,
we prefer setting the tetris earlier in the queue closer to the top-left, origin of the map.
order of importance : tetrimino index > y > x
