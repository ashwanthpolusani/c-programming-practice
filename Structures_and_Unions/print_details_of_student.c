#include<stdio.h>
struct student
{
	char name[10];
	int age;
	float marks;
};
main()
{
	int n,i,j;
	printf("\n enter size: ");
	scanf("%d",&n);
	struct student s[n];
	printf("\n Name , Age , Marks ");
	for(i=0;i<n;i++)
	{
		printf("\n Enter the details of student %d\n",i+1);
		scanf("%s%d%f",s[i].name,&s[i].age,&s[i].marks);
	}
	printf("\n the student details are:\n");
		for(j=0;j<35;j++)
			printf("-");
	printf("\n| S.No |   Name   | Age |  Marks  |\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<35;j++)
			printf("-");
		printf("\n|  %2d. |%8s  |%4d |%8.2f |\n",i+1,s[i].name,s[i].age,s[i].marks);
	}
		for(j=0;j<35;j++)
			printf("-");
}
