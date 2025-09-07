#include<stdio.h>
main()
{
	int n,i,*p;
	printf("enter size");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
		printf("Memory not created");
	else
	{
	printf("\n enter elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
	display(p,&n);
	}
}
void display(int *q,int *m)
{
	int i,t,flag;
	printf("\n enter search element");
	scanf("%d",&t);
	for(i=0;i<*m;i++)
	{
		if(*(q+i)==t)
			flag=1;
	}
	if(flag==1)
		printf("\n element found");
	else
		printf("\n element not found");
}
