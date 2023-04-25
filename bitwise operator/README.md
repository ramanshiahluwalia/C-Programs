
# Bitwise Operations Program



This C program allows the user to perform several bitwise operations on integers. The program offers a menu with five options:

AND, OR, XOR of two numbers
Count the number of 1s in an integer
Check if a number is even or odd
Check if a number is a power of two or not
Print a number in binary
The program prompts the user to select one of the options, and then performs the corresponding operation based on the input provided by the user. The code uses a switch statement to handle each of the five options.


## Initialization

The code starts by including the standard I/O library, and then defines a macro to allocate memory for an array of integers. It also declares the main function and several variables, including a, b, x, y, and z, which are used to store the user input for each of the operations.



```
#define SIZE sizeof(int) * 4 

```
## Use

To use the program, simply compile and run the code in a C compiler. When prompted, enter a number from the list of options to perform the corresponding operation. The program will display the results of the operation on the screen