#include<stdio.h>
struct student read();
struct student
{
	char name[10];
	int age;
	float marks;
};
main()
{
	struct student f,s;
	f=read();
	display(f);
}
void display(struct student s)
{
	printf("%s %d %f",s.name,s.age,s.marks);
}
struct student read()
{
	struct student e;
	printf("Enter the values");
	scanf("%s%d%f",e.name,&e.age,&e.marks);
	return e;
}
