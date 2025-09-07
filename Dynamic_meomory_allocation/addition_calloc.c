#include<stdio.h>
#include<stdlib.h>
int m,n,i,j,k;
main()
{
	int *p,o,*r;
	char ch;
	printf("\n enter size m & n ");
	scanf("%d%d",&m,&n);
	p=(int*)calloc(m*n,sizeof(int));
	if(p==NULL)
		printf("Memory not created");
	else
	{
		printf("\n enter elements  ");
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",p+(i*n+j));
	}
	r=(int*)malloc(m*n*sizeof(int));
	if(p==NULL)
		printf("Memory not created");
	else
	{
	printf("\n enter elements of matrix 2 ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",r+(i*n+j));
	}
	printf("\nThe elements are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%5d",*(p+(i*n+j))+*(r+(i*n+j)));
		printf("\n");
	}
}
