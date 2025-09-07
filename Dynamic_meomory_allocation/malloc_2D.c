#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,i,j,n,m;
	printf("\n enter size m & n ");
	scanf("%d%d",&m,&n);
	p=(int*)malloc(m*n*sizeof(int));
	if(p==NULL)
		printf("Memory not created");
	else
	{
		printf("\n enter elements  ");
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",p+(i*n+j));
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		printf("%d\t",*(p+(i*n+j)));
		printf("\n");
		}
	}
	free(p);
}
