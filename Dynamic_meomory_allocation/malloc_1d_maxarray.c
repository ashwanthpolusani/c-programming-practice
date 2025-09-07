#include<stdio.h>
main()
{
	int *p,n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	printf("\n No memory created");
	else
	{
		printf("\nEnter the elements\n");
		for(i=0;i<n;i++)
		scanf("%d",p+i);
		display(p,n);
	}
}
void display(int *p,int n)
{
	int max=0,i;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>max)
		max=*(p+i);
	}
		printf("\n The max = %d",max);
}
