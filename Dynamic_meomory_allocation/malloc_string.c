#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p;
	int n;
	printf("Enter the size");
	scanf("%d",&n);
	p=(char *)malloc(n);
	if(p=='\0')
	printf("Memory not created");
	else
	{
		printf("enter the string");
		scanf("%s",p);
	}
	printf("The string is = %s",p);
}
