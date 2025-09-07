#include<stdio.h>
int main(int argc,char *argv[])
{
	int n;
	n=atoi(argv[1]);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		a[i]=atoi(argv[i+2]);
		printf("%d\n",a[i]);
	}
	return 0;
}
