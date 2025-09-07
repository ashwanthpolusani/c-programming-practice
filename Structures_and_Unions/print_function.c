struct student
{
	char name[10];
	int age;
	float marks;
};
main()
{
	struct student s={"peter",34,76.98};
	display(s);
}
void display(struct student s)
{
	printf("%s %d %f",s.name,s.age,s.marks);
}
