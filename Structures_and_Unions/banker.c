#include<stdio.h>
struct banker
{
	char name[10];
	int age;
	long long int mobile;
	char acc[12];
	long int  bal;	
};
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
		scanf("%s%d%lld%s%ld",b[i].name,&b[i].age,&b[i].mobile,b[i].acc,&b[i].bal);
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
	printf("\n| %2d. |  %10s  |  %10d  |  %12lld  |  %10s  |  %10d  |",i+1,b[i].name,b[i].age,b[i].mobile,b[i].acc,b[i].bal);
	}
	printf("\n");
	for(j=0;j<85;j++)
		printf("_");
}
