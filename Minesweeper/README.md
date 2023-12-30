# Minesweeper

# Input
You are given an N by M matrix (N and M are two integers entered on the console), in which the cells contain single characters – either a . (dot) or a ! (exclamation mark) – representing "empty" or "mined" positions.Each cell in a matrix has at most 8 adjacent cells – the cells directly above, below, to the left, to the right, as those diagonally – to the left and above, to the right and above, to the right and below and to the left and below.

# Output
Print every cell with a number, representinh how many adjacent cells, including itself, are "mined".

# Examples
*example 1  
-input   
5 8
........
...!....
....!...
........
...!....
-output  
00111000
00122100
00122100
00122100
00111000

*example 2  
-input  
3 3
!!!
!.!
!!!
-output  
353
585
353
