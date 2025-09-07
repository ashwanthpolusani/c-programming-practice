#include<stdio.h>
int m,n;
main()
{
	printf("\n enter size");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],i,j,*p,*q;
	p=&a[0][0],q=&b[0][0];
	printf("\n enter elements of matrix 1\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\n enter elements of matrix 2\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	display(p,q,&m,&n);
}
void display(int *p,int *q,int *m,int *n)
{
	int i,j;
	printf("\nThe elements are\n");
	for(i=0;i<*m;i++)
	{
		for(j=0;j<*n;j++)
		printf("%5d",*(p+(i**n+j))+*(q+(i**n+j)));
		printf("\n");
	}
}
