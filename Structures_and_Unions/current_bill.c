#include<stdio.h>
float disp(int,int);
struct bill
{
	char fname[10];
	char lnmae[10];
	int prvunits;
	int prsunits;
	float total;
};
main()
{
	int n,i,j;
	printf("\nEnter the no.of people");
	scanf("%d",&n);
	struct bill b[n];
	printf("\n Fname,Lname,prv_units,prs_units");
	for(i=0;i<n;i++)
	{
	printf("\n enter the details of person %d :\n",i+1);
	scanf("%s%s%d%d",b[i].fname,b[i].lnmae,&b[i].prvunits,&b[i].prsunits);
	b[i].total=disp(b[i].prvunits,b[i].prsunits);
	}
	printf("\n the current bill is :\n");
	for(j=0;j<=70;j++)
		{
			printf("-");
		}
	printf("\n|S.No|    F-name  |    L-name  |  prv_units |  prs_units |     Total  |\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=70;j++)
		{
			printf("-");
		}
	printf("\n| %2d |%10s  |%10s  |%10d  |%10d  |%10.2f  |\n",i+1,b[i].fname,b[i].lnmae,b[i].prvunits,b[i].prsunits,b[i].total);
	}
		for(j=0;j<=70;j++)
		{
			printf("-");
		}
}
float disp(int x,int y)
{
	int u;
	u=y-x;
	float a;
	if(u>=0&&u<=100)
	{
		a=(float)u*0.80+100;
	}
	if(u>=101&&u<=200)
	{
		a=(float)u*0.90+100;
	}
	if(u>=201&&u<=300)
	{
		a=(float)u*1.00+100;
	}
	if(u>300)
	{
		a=(float)u*2.00+100;
	}
	return a;
}
