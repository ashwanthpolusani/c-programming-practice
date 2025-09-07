#include<stdio.h>
#include<string.h>
main()
{
	int n=6,m,i,j,s[2]={0,0},k=0,x[6],y=0,z=0,t;
	char a[10],b[10],r[10],c[10][10];
	printf("\t\t\t\t\t\t\tWELCOME TO CRICKET SCORE READER\n\n");
	printf("\n enter the names of players\n");
	gets(a);
	gets(b);
	printf("\nenter the number of overs : ");
	scanf("%d",&m);
/*	printf("\nEnter target score: ");
	scanf("%d",&t);*/
	for(j=0;j<m;j++)
	{
		printf("\nOver %d",j+1);
	for(i=0;i<n;i++)
	{
	printf("\n enter the score of ball %d\n",i+1);
	scanf(" %c",&r[i]);
	if(r[i]=='.'||r[i]=='0')
	{
		s[k]=s[k]+0;
	}
	else if(r[i]=='4')
	{
		s[k]=s[k]+4;
	}
	else if(r[i]=='6')
	{
		s[k]=s[k]+6;
	}
	else if(r[i]=='1')
	{
		s[k]=s[k]+1;
		if(k==1)
		k=0;
		else
		k=1;
	}
	else if(r[i]=='2')
		s[k]=s[k]+2;
	else if(r[i]=='3')
	{
		s[k]=s[k]+3;
		if(k==1)
		k=0;
		else
		k=1;
	}
	else if(r[i]=='w'||r[i]=='W')
	{
		s[k]=s[k]+1;
		i--;
	}
	else if(r[i]=='o'||r[i]=='O')
	{
		s[k]=s[k]+0;
		printf("\n enter the name of new player\n");
		if(k==0)
		{
		strcpy(c[y],a);
		scanf(" %s",a);
		}
		else
		{
		strcpy(c[y],b);
		scanf(" %s",b);
		}
		x[y]=s[k];
		s[k]=0;
		y++;
	}
}
}
	strcpy(c[y],a);
	x[y]=s[0];
	y++;
	strcpy(c[y],b);
	x[y]=s[1];
	for(i=0;i<=y;i++)
	z+=x[i];
	for(i=0;i<=y;i++)
		printf("\n score of %s = %d",c[i],x[i]);
	printf("\nTotal score = %d",z);
	printf("\n The team is with final batsmen    %s   and   %s",a,b);
	/*if(z>=t)
	{
		printf("\n The team won with final batsmen    %s   and   %s",a,b);
	}
	else
	{
	printf("\n The team lost");
	}*/
}
