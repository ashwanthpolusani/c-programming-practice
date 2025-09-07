#include<stdio.h>
int i;
main()
{
	int a[10],i,n,*p;
	p=a;
	printf("\n enter size");
	scanf("%d",&n);
	printf("\n enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	display(p,&n);
}
void display(int *p,int *n)
{
	for(i=0;i<*n;i++)
	{
		printf("%5d",*(p+i));
	}
}
