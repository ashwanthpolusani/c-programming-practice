#include<stdio.h>
main()
{
	int n;
	FILE *fp;
	fp=fopen("number.txt","w");
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
	fp=fopen("number.txt","r");
	while((n=getw(fp))!=EOF)
	printf("\n%d",n);
	fclose(fp);
}
