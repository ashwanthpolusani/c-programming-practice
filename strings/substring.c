#include<stdio.h>
main()
{
	char a[10],b[10],*x,*y,n,*m;
	x=a,y=b,m=&n;
	printf("enter strinng 1");
	gets(x);
	printf("enter strinng 2");
	gets(y);
	*m=strstr(x,y);
	if(*m==0)
		printf("\n not present");
	else
		printf("\n present");
}
