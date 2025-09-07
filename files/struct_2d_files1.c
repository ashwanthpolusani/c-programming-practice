#include<stdio.h>
struct peter
	{
	char name[20],branch[20];
	int rollno;	
	};
	struct peter a[5];
main()
{
	FILE *f1;
	int i;
	f1=fopen("D:/editor/student","w");
	printf("\n Enter data into the file");
	for(i=0;fscanf(stdin,"%s%s%d",a[i].name,a[i].branch,&a[i].rollno)!=EOF;i++)
	fprintf(f1,"%s\t%s\t%d\n",a[i].name,a[i].branch,a[i].rollno);
	fclose(f1);
	f1=fopen("D:/editor/student","r");
	printf("\n The data in the file is ");
	for(i=0;fscanf(f1,"%s%s%d",a[i].name,a[i].branch,&a[i].rollno)!=EOF;i++)
	fprintf(stdout,"%s\t%s\t%d\n",a[i].name,a[i].branch,a[i].rollno);
	fclose(f1);
	getch();
	printf(" I desire :\n");
	f1=fopen("D:/editor/student","r");
//	fscanf(f1,a);
	fprintf(stdout,"%s\t%s\t%d\n",a[2].name,a[1].branch,a[0].rollno);
	fclose(f1);
	getch();
}
