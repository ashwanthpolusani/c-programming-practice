#include<stdio.h>
struct exam
{
	int date;
	int month;
	int year;
};
struct student
{
	char name[10];
	int age;
	struct exam d;
}b;
main()
{
	scanf("%s%d",b.name,&b.age);
	scanf("%d%d%d",&b.d.date,&b.d.month,&b.d.year);
	printf("\n the details are \n");
	printf("%s\t%d\t%d\t%d\t%d",b.name,b.age,b.d.date,b.d.month,b.d.year);
}
