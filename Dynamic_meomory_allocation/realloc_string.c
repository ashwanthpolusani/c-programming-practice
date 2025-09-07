#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p;
	p=(char *)malloc(4);
	if(p=='\0')
	printf("Memory not created");
	else
	{
		strcpy(p,"wel");
	}
	p=(char *)realloc(p,8);
	if(p=='\0')
	printf("Memory not created");
	else
	{
		strcpy(p,"welcome");
	}
	printf("Now p has %s",p);
	free(p);
	getch();
}
