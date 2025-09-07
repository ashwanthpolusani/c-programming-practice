#include<stdio.h>
int m,n,e,f;
main()
{
	printf("\n enter sizes 2 matrices");
	scanf("%d%d%d%d",&m,&n,&e,&f);
	if(n==e)
	{
	int a[m][n],b[e][f],i,j,*p,*q;
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
else
printf("\nenter proper size");
}
void display(int *p,int *q,int *m,int *n)
{
	int i,j,c[*m][f],*r,k;
	r=&c[0][0];
	for(i=0;i<*m;i++)
	{
		for(j=0;j<f;j++)
		{
			*(r+(i*f+j))=0;
			for(k=0;k<f;k++)
			*(r+(i*f+j))+=*(p+(i*f+k))**(q+(k*f+j));
		}
	}
	for(i=0;i<*m;i++)
	{
		for(j=0;j<f;j++)
		{
			printf("%5d",*(r+(i*f+j)));
		}
		printf("\n");
	}
}
