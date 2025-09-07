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
	free(p);
}
void display(int *q,int *m)
{
	int i,j,e,p;
	printf("enter the new element");
	scanf("%d",&e);
	printf("\n enter the new position");
	scanf("%d",&p);
	for(i=*m;i>=p;i--)
	{
		*(q+i+1)=*(q+i);
	}
	*(q+p)=e;
	for(i=0;i<=*m;i++)
	{
		printf("%3d",*(q+i));
	}
}
