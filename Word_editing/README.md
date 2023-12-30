# Word-Processing Program
This is the skeleton of a word-processing program, similar to MS Word or OpenOffice Writer. The program reads a line of text from the console and allows users to execute various commands for text transformation.  

# Overview
The program accepts a line of text and a sequence of commands, which are applied to the text. Each command has the format:  
commandName startIndex endIndex

commandName: Describes the type of command to be executed.  
startIndex: Integer, the starting index in the text for the command.  
endIndex: Integer, the ending index (exclusive) for the command.  

When the exit command is entered, the program prints the modified text and exits.  

# Implemented Commands
1. Uppercase Command - Transforms any alphabetical character in the text in the specified range to its uppercase variant.  

Example:
uppercase 1 7  
Input: "som3. text"  
Output: "sOM3. Text"  

2. Cut Command  
Cuts (removes) characters in the specified range and remembers the last cut. If startIndex == endIndex, it clears the last remembered cut.  

Example:
cut 1 7  

Input: "som3. text"  
Output: "sext"  

3. Paste Command

Replaces characters in the specified range with the characters that were last cut. If startIndex == endIndex, the paste will insert the text at position startIndex.  

Example:
paste 3 4  

Input: "som3. Text" (after executing cut 1 7)  
Output: "sexom3. t"  

# Input
The program reads a line of text, followed by a sequence of lines containing commands. Commands end with the exit command.  

# Output  
The program prints the modified line of text.  

# Constraints  
Input text length: ≤ 30 characters  
Number of commands: ≤ 10  
Total running time: ≤ 0.1s  
Total memory: ≤ 16MB

# Examples 
*example 1  
-input  
som3. text  
cut 1 7  
paste 3 4  
exit  
-output  
sexom3. t  

*example 2  
-input  
abc d e  
cut 0 4  
uppercase 1 3  
paste 1 2  
exit  
-output  
dabc E   
