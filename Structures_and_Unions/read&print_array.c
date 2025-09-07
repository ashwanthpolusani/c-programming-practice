#include<stdio.h>

struct student read();

struct student
{
	char name[10];
	int age;
	float marks;
};
void display(struct student [],int);
int i,j;
main()
{
	int n;
	printf("Enter size\n");
	scanf("%d",&n);
	struct student f[10];
	for(i=0;i<n;i++)
	{
	f[i]=read();
	}
	display(f,n);
}
void display(struct student f[],int n)
{
	printf("\n| S.No |   Name   | Age |  Marks  |\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<35;j++)
			printf("-");
		printf("\n|  %2d. |%8s  |%4d |%8.2f |\n",i+1,f[i].name,f[i].age,f[i].marks);
	}
}
struct student read()
{
	struct student e;
	printf("\n Enter the details of student");
	scanf("%s%d%f",e.name,&e.age,&e.marks);
	return e;
}
