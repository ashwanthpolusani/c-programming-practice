#include<stdio.h>
int main(int argc,char *argv[])
{
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	printf("greatest number = ");
	printf("%d",a>b?(a>c?a:c):(b>c?b:c));
}
