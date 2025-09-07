#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,i,n;
	printf("\n enter size");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
		printf("Memory not created");
	else
	{
		printf("\n enter elements  ");
		for(i=0;i<n;i++)
		scanf("%d",p+i);
		for(i=0;i<n;i++)
		printf("%d\t",*(p+i));
	}
}
