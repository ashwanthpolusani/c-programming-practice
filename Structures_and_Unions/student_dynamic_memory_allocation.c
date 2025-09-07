#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int age;
	float marks;
}r;
void read(struct student *);
void display(struct student *,int);
int i,j,n;
main()
{
	struct student *p,*q;
	printf("Enter size");
	scanf("%d",&n);
	p=(struct student *)malloc(n*sizeof(struct student));
	read(p);
	display(p,n);
}
void display(struct student *p,int n)
{
	printf("\n| %-5s|  %-8s| %-4s| %-8s|\n","s.no","Name","Age","Marks");
	for(i=0;i<n;i++)
	{
		for(j=0;j<35;j++)
			printf("-");
		printf("\n|  %-2d. |  %-8s| %-4d| %-8.2f|\n",i+1,(p+i)->name,(p+i)->age,(p+i)->marks);
	}
	for(j=0;j<35;j++)
			printf("-");
}
void read(struct student *e)
{
	for(i=0;i<n;i++)
	{
		printf("\nEnter the details of student %d :",i+1);
		printf("\nEnter name :");
		scanf("%s",(e+i)->name);
		printf("Enter age :");
		scanf("%d",&(e+i)->age);
		printf("Enter marks :");
		scanf("%f",&(e+i)->marks);
	}
}
