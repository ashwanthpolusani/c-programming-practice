#include<stdio.h>
struct employee
{
char name[10];
int age;
long long int number;
char position[10];
int salary;
};
main()
{
	int m,i,j;
	printf("Enter the number of employees\n");
	scanf("%d",&m);
	struct employee e[m];
	printf("\n name,age,phone number, position ,salary\n");
	for(i=0;i<m;i++)
	{
	printf("\nEnter the details of employee %d \n",i+1);
	scanf("%s%d%lld %s %d",e[i].name,&e[i].age,&e[i].number,e[i].position,&e[i].salary);
	}
	printf("the employee details are :\n");
	for(j=0;j<85;j++)
		printf("-");
	printf("\n|S.No.|        Name  |         Age  |         Phone  |    Position  |      Salary  |");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<85;j++)
		printf("-");
	printf("\n| %2d. |  %10s  |  %10d  |  %12lld  |  %10s  |  %10d  |",i+1,e[i].name,e[i].age,e[i].number,e[i].position,e[i].salary);
	}
	printf("\n");
	for(j=0;j<85;j++)
		printf("-");
}
