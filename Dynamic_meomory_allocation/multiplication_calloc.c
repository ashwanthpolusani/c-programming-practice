#include<stdio.h>
#include<stdlib.h>
int m,n,i,j,k;
main()
{
	int *p,o,*s,*x;
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
	s=(int*)malloc(m*n*sizeof(int));
	if(p==NULL)
		printf("Memory not created");
	else
	{
	printf("\n enter elements of matrix 2 ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",s+(i*n+j));
	}
	x=(int*)malloc(m*n*sizeof(int));
	if(p==NULL)
		printf("Memory not created");
	else
	{
	printf("\n the prouct matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(x+(i*n+j))=0;
			for(k=0;k<n;k++)
			*(x+(i*n+j))+=*(p+(i*n+k))**(s+(k*n+j));
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",*(x+(i*n+j)));
		}
		printf("\n");
	}
  }
}
