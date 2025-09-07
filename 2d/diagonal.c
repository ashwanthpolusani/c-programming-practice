#include<stdio.h>
int main()
{
	int a[3][3],*p,i,j,n;
	p=a;
	printf("\n enter size");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",p+(i*n+j));
	}
	printf("\n the diagonal elements are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)==*(p+j))
			printf("%d\t",*(p+(i*n+j)));
			else
			printf("\t");
		}
		printf("\n");
	}
}
