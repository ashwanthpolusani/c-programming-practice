#include<stdio.h>
main()
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
	printf("\n the array elements are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(p+(j*n+i)));
		}
		printf("\n");
	}
}
