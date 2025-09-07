#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char *p,a[10],b[10],r;
	int n,m;
	printf("enter string\n");
	gets(a);
	printf("enter the size\n");
	scanf("%d",&n);
	p=(char *)malloc(n*sizeof(char));
	if(p=='\0')
	printf("Memory not created");
	else
	{
		strcpy(p,a);
	}
	printf("enter string\n ");
	scanf("%c",&r);
	gets(b);
	printf("enter the size\n");
	scanf("%d",&m);
	p=(char *)realloc(p,m*sizeof(char));
	if(p=='\0')
	printf("Memory not created");
	else
	{
		strcpy(p,b);
	}
	printf("Now p has %s",p);
	free(p);
	getch();
}
