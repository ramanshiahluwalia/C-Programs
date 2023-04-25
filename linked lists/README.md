
# Linked lists



This program implements a stack data structure in C. The user can push elements onto the stack, pop elements from the stack, and display the current state of the stack.




## Singly linked lists-1



This C program demonstrates the creation of a singly linked list. In a singly linked list, each node points to the next node in the list, and the last node points to NULL.

The program creates three nodes using dynamic memory allocation, and assigns them integer values. The first node is assigned to the variable "start", which points to the beginning of the list. The "next" pointer of each node is assigned to the next node in the list.

The program then prints the data, self-address, and next-address of each node using printf statements.
## Singly linked list-2


This program creates a singly linked list with three nodes using dynamic memory allocation. The linked list consists of a series of nodes, each containing an integer value and a pointer to the next node in the list. In this case, the integer values of the nodes are set to 20, 30, and 40, respectively.

The program first creates three new nodes, which are pointers to struct node, using the malloc function to allocate memory dynamically. The start pointer is then set to point to the first node in the list, which is newnode1.

Next, the integer values of the nodes are assigned using the -> operator. The next pointer of each node is set to point to the next node in the list, linking the nodes together. The next pointer of the last node, newnode3, is set to NULL to indicate the end of the list.

After creating the linked list, the program uses the printf function to display the integer value, self address, and next address of each node. The selfadd refers to the memory address of the current node, while nextadd refers to the memory address of the next node in the list.

Finally, the program calls the disp function to display the same information using a loop that iterates through the linked list. The temp pointer is used to traverse the list, starting from the first node, start, and continuing until temp is NULL, which indicates the end of the list. The printf function is used to display the same information as before for each node in the list.

Overall, this program demonstrates how to create a simple linked list using dynamic memory allocation and how to traverse the list using a loop and a pointer


## Circular Linked List Implementation in C


This program demonstrates the implementation of a circular linked list in C. The circular linked list is a type of linked list where the last node points to the first node instead of a NULL value, thus forming a circular chain of nodes
### Usage:
The program creates a circular linked list with three nodes containing integer data values. It then uses a function called "disp" to traverse the linked list and print out the data, self-address, and next-address of each node in the list. The disp function uses a flag variable to keep track of the number of nodes that have been printed and exits after printing three nodes.

