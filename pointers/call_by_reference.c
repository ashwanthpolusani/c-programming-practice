#include<stdio.h>
main()
{
	int a[3][3],i,n,j,*p;
	p=a;
	printf("\n enter size");
	scanf("%d",&n);
	printf("\n enter array elements");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",p+(i*n+j));
	display(p,&n);
}
void display(int *p,int *n)
{
	int i,j;
	for(i=0;i<*n;i++)
	{
	for(j=0;j<*n;j++)
	{
		printf("%5d",*(p+(i**n+j)));
	}
	printf("\n");
}
}
