
# Queue
A queue is a linear data structure in which elements are added from one end called the rear and deleted from the other end called the front. It follows the FIFO (First In First Out) principle.

The given code implements a simple queue using an array in C language. The program provides three options: Enqueue, Dequeue, and Display. The enqueue function is used to add elements to the queue, the dequeue function is used to delete elements from the queue, and the display function is used to display the elements of the queue in the order they were added.


````
struct Person {
    char name[50];
    int age;
    float height;
};

````

## Implementation
The implementation of the code is straightforward. It defines an array of size 10, two variables front and rear that keep track of the front and rear of the queue, and three functions to perform operations on the queue. The main function presents the user with a menu of choices to enqueue, dequeue, or display the queue.


## Usage



To use this program, simply copy the code and include it in your source code. You can call the enqueue, dequeue, and display functions to add, delete, and display elements of the queue. Here is an example:

````
// create a queue and add elements to it
enqueue(10);
enqueue(20);
enqueue(30);

// delete an element from the queue
dequeue();

// display the elements of the queue
display();

````

## Sample output
````
Enter your choice:
 1.Enqueue
 2.Dequeue
 3.Display
1
Enter data: 10
Enter your choice:
 1.Enqueue
 2.Dequeue
 3.Display
1
Enter data: 20
Enter your choice:
 1.Enqueue
 2.Dequeue
 3.Display
3

20

10
Enter your choice:
 1.Enqueue
 2.Dequeue
 3.Display
2
Enter your choice:
 1.Enqueue
 2.Dequeue
 3.Display
3

20

````


