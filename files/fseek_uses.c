#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char data[60];
	fp=fopen("D:/editor/ninja1.txt","w");
	fputs("Welcome to PSP Programming for CSE and ECE",fp);
	fclose(fp);
	fp=fopen("D:/editor/ninja1.txt","r");
	fgets(data,60,fp);
	printf("\n Before fseek-%s\n",data);
	fseek(fp,21,SEEK_SET);
	fgets(data,60,fp);
	printf("\n After SEEK_SET to 21-%s\n",data);
	fseek(fp,-10,SEEK_CUR);
	fgets(data,45,fp);
	printf("\n After SEEK_CUR to -10-%s\n",data);
	fseek(fp,-7,SEEK_CUR);
	fgets(data,60,fp);
	printf("\n After SEEK_CUR to -7-%s\n",data);
	fseek(fp,0,SEEK_SET);
	fgets(data,60,fp);
	fclose(fp);
	return 0;
}
