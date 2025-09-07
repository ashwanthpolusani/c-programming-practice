#include<stdio.h>
#include<stdlib.h>
int m,n,i,j,k;
main()
{
	int *p,o;
	char ch;
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
	}
	do
	{
	printf("\n enter the option\n");
	printf("1.print the array\n2. transpose\n3. trace\n");
	printf("4. sum of 2d elements\n 5. addition of two matrices\n");
	printf("6. muliplication of two matrices\n");
	scanf("%d",&o);
	switch(o)
	{
		case 1:print(p);
			break;
		case 2:tran(p);
			break;
		case 3:tra(p);
			break;
		case 4:sum(p);
			break;
		case 5:add(p);
			break;
		case 6:mul(p);
			break;
	default:printf("\n enter proper option");	
	}
	printf("\n enter y to continue");
	scanf(" %c",&ch);
}while(ch=='y');
free(p);
}
void print(int *q)
{
	for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		printf("%d\t",*(q+(i*n+j)));
		printf("\n");
		}
}
void tran(int *q)
{
	for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		printf("%d\t",*(q+(j*n+i)));
		printf("\n");
		}
}
void tra(int *q)
{
	int s=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(q+i)==*(q+j))
			s+=*(q+(i*n+j));
		}
	}
	printf("\n trace=%d",s);	
}
void sum(int *q)
{
	int s=0;
	for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		s+=*(q+(i*n+j));
		}
	printf("\n sum of elements=%d",s);
}
void add(int *q)
{
	int *r;
	r=(int*)malloc(m*n*sizeof(int));
	printf("\n enter elements of matrix 2 ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",r+(i*n+j));
	printf("\nThe elements are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%5d",*(q+(i*n+j))+*(r+(i*n+j)));
		printf("\n");
	}
}
void mul(int *q)
{
	int *s,*x;
	s=(int*)malloc(m*n*sizeof(int));
	x=(int*)malloc(m*n*sizeof(int));
	printf("\n enter elements of matrix 2 ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",s+(i*n+j));
	printf("\n the prouct matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(x+(i*n+j))=0;
			for(k=0;k<n;k++)
			*(x+(i*n+j))+=*(q+(i*n+k))**(s+(k*n+j));
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",*(x+(i*n+j)));
		}
		printf("\n");
	}
}
