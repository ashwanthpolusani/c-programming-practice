#include<stdio.h>
main()
{
	int *p,a[10],b,*q,n,i,flag=0;
	q=&b;
	p=a;
	printf("\n enter size");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n enter search element");
	scanf("%d",q);
	for(i=0;i<n;i++)
	{
		if(*(p+i)==*q)
			flag=1;
	}
	if(flag==1)
		printf("\n element found");
	else
		printf("\n element not found");
}
