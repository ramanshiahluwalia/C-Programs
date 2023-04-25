/* 
	1. malloc
	2. calloc
	3. realloc
	4. free
	
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	// malloc()
	
	printf("dynamic memory allocation using malloc():\n\n");
	
	char *ptr = (char*) malloc(2);
	
	*ptr = 'a';
	printf("%c %d\n", *ptr, ptr);
	
	ptr++;
	
	*ptr = 'b';
	printf("%c %d\n\n\n\n", *ptr, ptr);
	
	
	
	// calloc()
	
	printf("dynamic memory allocation using calloc():\n\n");
	
	int i, n;
	
	int *ptr2 = (int*) calloc(3, 4);
	
	for(i = 0; i < 3; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &ptr2[i]);
	}
	
	printf("\nEntered array of numbers with their memory addresses:\n\n");
	
	for(i = 0; i < 3; i++)
	{
		printf("%d %d\n", ptr2[i], &ptr2[i]);
	}
	
	return 0;
}

