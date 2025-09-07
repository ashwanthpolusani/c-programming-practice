#include<stdio.h>
struct peter
{
	char name[20],branch[20];
	int rollno;	
};
struct peter a;
main()
{
	FILE *f1;
	f1=fopen("D:/editor/student","w");
	printf("\n Enter data into the file");
	fscanf(stdin,"%s%s%d",a.name,a.branch,&a.rollno);
	fprintf(f1,"\n%s\t%s\t%d",a.name,a.branch,a.rollno);
	fclose(f1);
	f1=fopen("student","r");
	printf("\n The data in the file is ");
	fscanf(f1,"%s%s%d",a.name,a.branch,&a.rollno);
	fprintf(stdout,"\n%s\t%s\t%d",a.name,a.branch,a.rollno);
	fclose(f1);
	getch();
}
