#include<stdio.h>
int main(int argc,char *argv[])
{
	int n,fact=1,i;
	n=atoi(argv[1]);
	for(i=1;i<=n;i++)
	fact*=i;
	printf("%d",fact);
}
