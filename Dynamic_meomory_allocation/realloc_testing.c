#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,i,n,n1;
	printf("Enter the size\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	printf("Memory not created");
	else
	{
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t=\t%u\n",*(p+i),p+i);
	}
}
printf("\nEnter the second size\n");
scanf("%d",&n1);
	p=realloc(p,n1*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n1;i++)
	{
		printf("%d\t=\t%u\n",*(p+i),p+i);
	}
free(p);
}
