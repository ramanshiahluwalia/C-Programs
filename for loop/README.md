
#  For loop in C


A for loop is a powerful programming construct that allows us to execute a block of code repeatedly for a fixed number of times or until a certain condition is met. It provides an elegant way to perform iterative operations without the need for repetitive code.

In this program, the for loop is used to add 2 to a counter variable ten times. However, the loop can be used for a wide variety of purposes, from iterating through arrays to performing complex calculations. It is an essential tool in any programmer's toolbox

## Flow of Execution:

The program starts by including the standard input/output library stdio.h and the standard library stdlib.h. It then defines the main function and declares two integer variables i and s.

The program then enters a for loop that runs ten times. In each iteration of the loop, it adds 2 to the value of i and stores the result in s.

Finally, the program prints the value of s to the screen using the printf() function.











## Explanations
This is a C program that demonstrates the use of a for loop. A for loop is a control flow statement that allows us to execute a block of code repeatedly for a fixed number of times or until a certain condition is met.

In this program, the for loop is used to iterate through a set of instructions ten times. The loop initializes the counter variable i to 1, checks if it is less than or equal to 10, and increments it by 1 at the end of each iteration.

Inside the loop, the value of i is added to 2 and the result is stored in the variable s. This process is repeated ten times.

Finally, the program prints the value of s to the screen using the printf() function.


For example, the following for loop prints the numbers from 1 to 10 to the screen:


````
for(int i=1; i<=10; i++) {
  printf("%d ", i);
}
````
In this loop, the counter variable i is initialized to 1, the loop continues to execute as long as i is less than or equal to 10, and i is incremented by 1 at the end of each iteration.




## Usage
A for loop is a fundamental programming construct used in a wide variety of applications. It is often used to iterate through arrays, perform calculations, or execute a set of instructions a fixed number of times.

To use a for loop, you need to specify three things in the loop header:

The initialization expression, which sets the initial value of the loop counter.
The loop condition, which determines when the loop should stop executing.
The update expression, which modifies the loop counter at the end of each iteration