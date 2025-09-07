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
	int i,j,t;
		for(i=0;i<*m;i++)
	{
		for(j=i+1;j<*m;j++)
		{
		if(*(q+i)>*(q+j))
		{
			t=*(q+j);
			*(q+j)=*(q+i);
			*(q+i)=t;
		}
		}
	}
	for(i=0;i<*m;i++)
	{
		printf("%3d",*(q+i));
	}
}
