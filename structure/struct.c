#include <stdio.h>
#include <stdlib.h>

struct toyshop
{
	int cs , year ;
	char name[50];
	char ch;
};
int main()
{
	int i;
	struct toyshop v[i] ;
	for(i=1;i<=10;i++)	
	{
	scanf("%s" ,&v[i].name);
    printf("Name:%s\n", v[i].name);
    scanf("%d" ,&v[i].cs);
    printf("Price of toy:%d\n",v[i].cs);
    scanf("%d" ,&v[i].year);
    printf("Manufacturing year:%d\n",v[i].year);
    scanf("%c" ,&v[i].ch);
    printf("Category Model:%c\n",v[i].ch);
}
	return 0;
}
