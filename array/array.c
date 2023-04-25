#include <stdio.h>
#include <stdlib.h>



int main()
 
{
	int x[5]= {2,10,15,17,21};
	int i;
	scanf("%d", &i);
	if(i>=0 && i<=4 )
	{
		printf("the number is betwwen 0 and 4\n");
    printf("%d",x[i]);
	}
	else 
	{
    printf("enter value between 0 to 4");
	}
	return 0;
}