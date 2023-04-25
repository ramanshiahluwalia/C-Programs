#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *ptr=(char*) malloc(2);
	*ptr='a';
	printf("%c %d \n", *ptr,ptr);
	ptr++;
	*ptr='b';
	printf("%c %d", *ptr,ptr);
}