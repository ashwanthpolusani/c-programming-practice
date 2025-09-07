#include<stdio.h>
main()
{
	int n,i,fact=1;
	FILE *fp,*a;
	fp=fopen("D:/editor/factorial.txt","w");
	while(1)
	{
		scanf("%d",&n);
		if(n==-0)
		{
			break;
		}
		putw(n,fp);
	}
	fclose(fp);
	fp=fopen("D:/editor/factorial.txt","r");
	a=fopen("D:/editor/factorialstore.txt","w");
	while((n=getw(fp))!=EOF)
	{
		fact=1;
		for(i=1;i<=n;i++)
		fact*=i;
	//	printf("\n%d",fact);
		putw(fact,a);	
	}
	fclose(a);
	fclose(fp);
	printf("\n factorial file");
	a=fopen("D:/editor/factorialstore.txt","r");
	while((n=getw(a))!=EOF)
	printf("\n%d",n);
	fclose(a);
}
