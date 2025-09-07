#include<stdio.h>
main()
{
	FILE *f1,*f2;
	char c;
	f1 =fopen("D:/editor/data.txt","w");
	printf("Enter data");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f2 =fopen("D:/editor/data2.txt","w");
	f1 =fopen("D:/editor/data.txt","r");
	while((c=getc(f1))!=EOF)
	{
		putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
	printf("\ncopied file data\n");
	f2 =fopen("D:/editor/data2.txt","r");
	while((c=getc(f2))!=EOF)
	{
		putchar(c);
	}
	fclose(f2);
	printf("\noriginal file data\n");
	f1 =fopen("D:/editor/data.txt","r");
	while((c=getc(f1))!=EOF)
	{
		putchar(c);
	}
	fclose(f1);
	return 0;
}
