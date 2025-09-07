#include<stdio.h>
void display(int *,int *,int *);
main()
{
	int n,m,i,j,*p;
	printf("\n enter size");
	scanf("%d%d",&m,&n);
	int a[m][n];
	p=&a[0][0];
	printf("\n enter array elements");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	printf("%5d",a[i][j]);
	printf("\n");
}
	display(p,&n,&m);
}
void display(int *p,int *n,int *m)
{
	int i,j;
	for(i=0;i<*m;i++)
	{
	for(j=0;j<*n;j++)
	{
		printf("%5d",*(p+(i**n+j))+5);
	}
	printf("\n");
}
}
