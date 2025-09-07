#include<stdio.h>
struct person
{
	char name[10];
	int age;
	int weight;
	char gender;
};
main()
{
	struct person a,*p;
	p=&a;
	printf("\n Enter person details\n");
	scanf("%s%d%d %c",p->name,&p->age,&p->weight,&p->gender);
	printf("\n The person details");
	printf("\n%s\t%d\t%d\t%c",p->name,p->age,p->weight,p->gender);
}
