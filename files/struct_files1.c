#include<stdio.h>
main()
{
	FILE *f1;
	char name[20],branch[20];
	int rollno;
	f1=fopen("D:/editor/student","w");
	printf("\n Enter data into the file");
	fscanf(stdin,"%s%s%d",name,branch,&rollno);
	fprintf(f1,"\n%s\t%s\t%d",name,branch,rollno);
	fclose(f1);
	f1=fopen("student","r");
	printf("\n The data in the file is ");
	fscanf(f1,"%s%s%d",name,branch,&rollno);
	fprintf(stdout,"\n%s\t%s\t%d",name,branch,rollno);
	fclose(f1);
	getch();
}
