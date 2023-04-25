#include <stdio.h>
#include <stdlib.h>



int main()
{
int x=7;
int*p;
p=&x;
printf("The memory address is :%d\n",*p);
printf("value of x is : %d\n",x);
printf("%d\n",&x);
printf("%d\n",p);
printf("%d\n",&p);
  return 0;	
}
