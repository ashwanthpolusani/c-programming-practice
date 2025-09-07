#include<stdio.h>
struct emp
{
	char name[10];
	int age;
	float salary;
};
main()
{
	struct emp e,*p;
	p=&e;
	printf("\n Enter employee details\n");
	scanf("%s%d%f",p->name,&p->age,&p->salary);
	printf("\n Employ details are");
	printf("\n%s\t%d\t%f",p->name,p->age,p->salary);
}
