#include<stdio.h>
main()
{
	FILE *f1,*f2,*f3;
	char c;
	f1 =fopen("D:/editor/data.txt","w");
	printf("Enter data");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f2 =fopen("D:/editor/data2.txt","w");
	printf("Enter data");
	while((c=getchar())!=EOF)
	{
		putc(c,f2);
	}
	fclose(f2);
	f3 =fopen("D:/editor/data3.txt","w");
	f1 =fopen("D:/editor/data.txt","r");
	printf("\nfile 1 data\n");
	while((c=getc(f1))!=EOF)
	{
		putc(c,f3);
		putchar(c);
	}
	fclose(f1);
	printf("\nfile 2 data\n");
	f2 =fopen("D:/editor/data2.txt","r");
	while((c=getc(f2))!=EOF)
	{
		putc(c,f3);
		putchar(c);
	}
	fclose(f3);
	fclose(f2);
	printf("\ncopied file data\n");
	f3 =fopen("D:/editor/data3.txt","r");
	while((c=getc(f3))!=EOF)
	{
		putchar(c);
	}
	fclose(f3);
}
