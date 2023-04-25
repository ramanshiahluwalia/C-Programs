
# Dynamic Memory Allocation in C

Dynamic memory allocation in C is a process of allocating memory at runtime. In C programming language, we have four standard library functions to allocate and deallocate memory dynamically. These are malloc(), calloc(), realloc(), and free(). In this report, we will discuss malloc() and calloc() functions along with their implementations and sample outputs.


## Malloc()

````

int main()
{
    char *ptr=(char*) malloc(2);
    *ptr='a';
    printf("%c %d \n", *ptr,ptr);
    ptr++;
    *ptr='b';
    printf("%c %d", *ptr,ptr);
}


````
The above code demonstrates how to allocate memory dynamically using malloc() function. The program first allocates memory of size 2 bytes and assigns its address to a pointer variable ptr. Then, it stores the character 'a' at the location pointed by ptr and prints its value along with the memory address. Next, it increments the ptr by one to point to the next memory location and stores the character 'b' at that location. Finally, it prints the value and address of the second memory location.
````
a 1110624 
b 1110625
````

## Calloc()
The above code demonstrates how to allocate memory dynamically using calloc() function. The program first allocates memory for an integer array of size 3, each of 4 bytes using the calloc() function. Then, it asks the user to input three integer values and stores them in the allocated memory. Finally, it prints the values and addresses of the memory locations.

````
Enter a number: 10
Enter a number: 20
Enter a number: 30

Entered array of numbers with their memory addresses:

10 2448220
20 2448224
30 2448228
````


## Usage



The first code demonstrates the use of malloc() function for dynamic memory allocation. It allocates 2 bytes of memory to a character pointer and stores values 'a' and 'b' in the allocated memory blocks.

The second code demonstrates the use of both malloc() and calloc() functions. It dynamically allocates memory to an integer pointer using calloc() function and stores user-input values in the allocated memory blocks. It also displays the memory addresses of the allocated memory blocks.

These codes can be used as a reference for understanding dynamic memory allocation and the use of malloc(), calloc(), realloc() and free() functions in C programming language. They can be modified or extended for specific applications that require dynamic memory allocation.
