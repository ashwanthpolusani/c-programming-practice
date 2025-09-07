#include<stdio.h>
struct student
{
	char name[10];
	char branch[10];
	int no;
};
int main()
{
	FILE *f1;
	struct student s,b[10];
	char ch;
	int n=0;
	f1=fopen("D:/editor/bin1.bin","wb");
	do
	{
		printf("\n Enter student details\n");
		scanf("%s%s%d",s.name,s.branch,&s.no);
		fwrite(&s,sizeof(s),1,f1);
		printf("Do u want to continue");
		scanf(" %c",&ch);
		n++;
	}while(ch!='n');
	fclose(f1);
	f1=fopen("D:/editor/bin1.bin","rb");
	printf("\n student details\n");
	fread(&b,sizeof(s),1,f1);
	
	fclose(f1);
	int i;
	for(i=0;i<10;i++)
	printf("%s\t%s\t%d\n",b[i].name,b[i].branch,b[i].no);
}
