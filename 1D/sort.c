#include<stdio.h>
main()
{
	int *p,a[10],n,i,j,t;
	p=a;
	printf("\n enter size");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(*(p+i)>*(p+j))
		{
			t=*(p+j);
			*(p+j)=*(p+i);
			*(p+i)=t;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%3d",*(p+i));
	}
}
