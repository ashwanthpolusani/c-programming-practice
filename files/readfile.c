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
}
