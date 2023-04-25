
# struct
A struct declaration consists of a keyword struct followed by the name of the structure and a block of one or more members enclosed in curly braces. Each member has a name and a data type, and is separated by a semicolon. For example, a struct for storing information about a person might look like this:
````
struct Person {
    char name[50];
    int age;
    float height;
};

````



This program is about a toy shop that keeps track of its inventory. The program takes input from the user for the name, price, manufacturing year, and category model of the toys and stores them in an array of structures.






## Inventory Management System for a Toy Shop
### Implementation:



To implement this program, the following steps were taken:

A structure toyshop was defined with four member variables: cs (price of toy), year (manufacturing year of toy), name (name of toy), and ch (category model of toy).
A loop was created to prompt the user for input data for up to 10 different toys, using the scanf() function to store user input in the corresponding structure members.
Formatted output statements were used to print out the information that was inputted for each toy, using the printf() function.
.
### output
````
Enter name of toy: Teddy Bear
Name: Teddy Bear
Enter price of toy: 10
Price of toy: 10
Enter manufacturing year of toy: 2022
Manufacturing year: 2022
Enter category model of toy: S
Category model: S

````


