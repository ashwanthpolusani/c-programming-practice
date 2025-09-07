#include<stdio.h>
main()
{
	FILE *f1;
	char c;
	f1 =fopen("D:/editor/data.txt","w");
	printf("Enter data");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f1 =fopen("D:/editor/data.txt","r");
	while((c=getc(f1))!=EOF)
	{
		putchar(c);
	}
	fclose(f1);
}
