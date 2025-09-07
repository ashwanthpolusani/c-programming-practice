#include<stdio.h>
main()
{
	char a[10],b[10],*x,*y;
	x=a,y=b;
	printf("enter strinng 1");
	gets(x);
	printf("enter strinng 2");
	gets(y);
	strcat(y,x);
	printf("\n string 1=%s",x);
	printf("\n string 2=%s",y);
}
