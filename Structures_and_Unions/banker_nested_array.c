#include<stdio.h>
struct det
{
	long long int mobile;
	char acc[15];
	int bal;
};
struct banker
{
	char name[10];
	int age;
	struct det p;
}
main()
{
	int i,j,n;
	printf("Enter the size :");
	scanf("%d",&n);
	struct banker b[n];
	printf("name , age , mobile , account number , balance");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the details of banker %d\n",i+1);
		scanf("%s%d%lld%s%ld",b[i].name,&b[i].age,&b[i].p.mobile,b[i].p.acc,&b[i].p.bal);
	}
	printf("the banker details are :\n");
	for(j=0;j<85;j++)
		printf("_");
	printf("\n|S.No.|        Name  |         Age  |         Phone  |   Acc-number |     Balance  |");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<85;j++)
		printf("-");
	printf("\n| %2d. |  %10s  |  %10d  |  %12lld  |  %10s  |  %10d  |",i+1,b[i].name,b[i].age,b[i].p.mobile,b[i].p.acc,b[i].p.bal);
	}
	printf("\n");
	for(j=0;j<85;j++)
		printf("_");
}
