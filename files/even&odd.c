#include<stdio.h>
main()
{
	FILE *f1,*a,*b;
	int n;
	f1=fopen("D:/editor/evenodd.txt","w");
	while(1)
	{
		scanf("%d",&n);
		if(n==-0)
		{
			break;
		}
		putw(n,f1);
	}
	fclose(f1);
	f1=fopen("D:/editor/evenodd.txt","r");
	a=fopen("D:/editor/even.txt","w");
	b=fopen("D:/editor/odd.txt","w");
	while((n=getw(f1))!=EOF)
	{
		if(n%2==0)
			putw(n,a);
		else
			putw(n,b);
	}
	fclose(b);
	fclose(a);
	fclose(f1);
	printf("\n evenodd file");
	f1=fopen("D:/editor/evenodd.txt","r");
	while((n=getw(f1))!=EOF)
	printf("\n%d",n);
	fclose(f1);
	printf("\n evenodd file");
	f1=fopen("D:/editor/even.txt","r");
	while((n=getw(f1))!=EOF)
	printf("\n%d",n);
	fclose(f1);
	printf("\n evenodd file");
	f1=fopen("D:/editor/odd.txt","r");
	while((n=getw(f1))!=EOF)
	printf("\n%d",n);
	fclose(f1);
}
