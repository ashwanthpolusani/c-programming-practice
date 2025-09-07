#include<stdio.h>
main()
{
	FILE *f1;
	char c,x;
	int n=0;
	f1=fopen("D:/editor/datain.txt","w");
	printf("Enter the data into the file\n");
	while((c=getchar())!=EOF)
	putc(c,f1);
	fclose(f1);
	f1=fopen("D:/editor/datain.txt","r");
	while((c=getc(f1))!=EOF)
	putchar(c);
	fclose(f1);
	f1=fopen("D:/editor/datain.txt","r");
	while((c=getc(f1))!=EOF)
	n++;
	printf("No of characters = %d",n);
	fclose(f1);
	f1=fopen("D:/editor/datain.txt","r");
	n=0;
	while((c=getc(f1))!=EOF)
	{
		if((x!= ' ' &&c==' ')||(x!= ' ' &&c=='\n'))
		{
			if(x!='\n')
			n++;
		}
		x=c;
	}
	printf("\nNo of words = %d",n);
	fclose(f1);
	f1=fopen("D:/editor/datain.txt","r");
	n=0;
	while((c=getc(f1))!=EOF)
	if(c=='\n')
	n++;
	printf("\nNo of lines = %d",n);
	fclose(f1);
}
