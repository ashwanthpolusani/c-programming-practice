#include<stdio.h>
struct student
{
	char name[10];
	int age;
	float marks;
};
main()
{
	struct student s1;
	printf("\n enter student details\n");
	scanf("%s%d%f",s1.name,&s1.age,&s1.marks);
	printf("\n the student details are");
	printf("\n%s\t%d\t%f",s1.name,s1.age,s1.marks);
}
