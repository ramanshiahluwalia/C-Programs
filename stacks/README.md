
# Stack Implementation in C



This program implements a stack data structure in C. The user can push elements onto the stack, pop elements from the stack, and display the current state of the stack.




## How to use



Upon running the program, the user will be prompted to enter their choice. They can choose from the following options:

Push an element onto the stack
Pop an element from the stack
Display the current state of the stack
To push an element onto the stack, the user should enter their desired element when prompted. If the stack is already full, the program will display an error message indicating that the stack is overflow.

To pop an element from the stack, the user will be prompted to enter the value of the element they wish to remove. If the stack is already empty, the program will display an error message indicating that the stack is underflow.

To display the current state of the stack, the program will print out each element in the stack, in the order they were added

## Implementation Details


The stack is implemented as an array of integers with a maximum size of 10 elements. The top variable is used to keep track of the index of the last element that was added to the stack. When an element is pushed onto the stack, the top variable is incremented and the new element is added to the next available position in the array. When an element is popped from the stack, the top variable is decremented and the element at the current top index is removed