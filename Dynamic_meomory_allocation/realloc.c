#include<stdio.h>
main()
{
	int n,m,*p,i;
	printf("enter first size\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	printf("memory not allocated");
	else
	{
	printf("\n enter elements");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	printf("\n the elements are\n");
	for(i=0;i<n;i++)
	printf("%5d",*(p+i));
	}
	printf("\nenter second size\n");
	scanf("%5d",&m);
	p=realloc(p,m*sizeof(int));
	if(p==NULL)
	printf("memory not allocated");
	else
	{
	printf("\n enter elements");
	for(i=0;i<m;i++)
	scanf("%d",p+i);
	printf("\n the elements are\n");
	for(i=0;i<m;i++)
	printf("%5d",*(p+i));
	}
}
