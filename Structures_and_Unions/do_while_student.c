#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int age;
	float marks;
};
struct student read(int);
void display(struct student [],int);
int marks(struct student [],int,int);
int name(struct student [],int);
void sort(struct student [],int);
void search(struct student [],int);
void ageincr(struct student [],int,int);
void marksincr(struct student [],int,int);
int i,j,a,r,n;
main()
{
	FILE *f1;
	int x;
	char ch;
	printf("Enter size");
	scanf("%d",&n);
	struct student f[10];
	do
	{
		printf("\n1.read\n2.print\n3.search\n4.sort\n5.delete");
		printf("\nEnter the choice:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:for(i=0;i<n;i++)
						f[i]=read(i);
					break;
			case 2:display(f,n);
					break;
			case 3:search(f,n);
					break;
			case 4:sort(f,n);
					break;
			case 5:delet(f,n);
					break;
			default:printf("\n Choose correct option");
		}
		printf("\nPress y to continue ");
		scanf(" %c",&ch);
	}while(ch=='y');
}
void display(struct student f[],int n)
{
	printf("\n| S.No |   Name   | Age |  Marks  |\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<35;j++)
			printf("-");
		printf("\n|  %2d. |%8s  |%4d |%8.2f |\n",i+1,f[i].name,f[i].age,f[i].marks);
	}
}
struct student read(int i)
{
	struct student e;
	printf("\n Enter the details of student %d :\n",i+1);
	scanf("%s%d%f",e.name,&e.age,&e.marks);
	return e;
}
void search(struct student f[],int n)
{
	i=0;
	printf("\n Enter search type\n");
	printf("1.name\n2.age\n3.marks");
	scanf("%d",&a);
	switch(a)
	{
		case 1:i=name(f,n);
			break;
		case 2:i=marks(f,n,1);
			break;
		case 3:i=marks(f,n,2);
			break;
		default:printf("\nout\n");
	}
	if(i==1)
	printf("\nelement found at position %d",r);
	else
	printf("\nelement not found");
}
void sort(struct student f[],int n)
{
	printf("\n Enter sort type\n");
	printf("1.age increment\n2.age decrement\n3.marks increment\n4.marks decrement\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:ageincr(f,n,1);
			break;
		case 2:ageincr(f,n,2);
			break;
		case 3:marksincr(f,n,1);
			break;
		case 4:marksincr(f,n,2);
			break;
		default:printf("\nout\n");
	}
}
int name(struct student f[],int n)
{
	char b[10];
	r=0; 
	int flag=0,k=9;
	printf("\nEnter the element: ");
	scanf("%s",b);
	printf("%d",n);
	for(i=0;i<n;i++)
	{
		k=strcmp(b,f[i].name);
		if(k==0){
			flag=1;
			r=i+1;
		}
	}
	return flag;
}
int marks(struct student f[],int n,int m)
{
	float x,flag=0;
	r=0;
	printf("\nEnter the element: ");
	scanf("%f",&x);
	for(i=0;i<n;i++)
	{
		if(m==1)
			if(f[i].age==x)
			{
				flag=1;
				r=i+1;
			}
		if(m==2)
			if(f[i].marks==x)
			{
				flag=1;
				r=i+1;
			}
	}
	return flag;
}
void ageincr(struct student f[],int n,int m)
{
	struct student p;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(m==1)
			if(f[i].age>f[j].age)
			{
				p = f[i];
				f[i] = f[j];
				f[j] = p;
			}
			if(m==2)
			if(f[i].age<f[j].age)
			{
				p = f[i];
				f[i] = f[j];
				f[j] = p;
			}
		}
	}
	display(f,n);
}
void marksincr(struct student f[],int n,int m)
{
	struct student p;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(m==1)
			if(f[i].marks>f[j].marks)
			{
				p = f[i];
				f[i] = f[j];
				f[j] = p;
			}
			if(m==2)
			if(f[i].marks<f[j].marks)
			{
				p = f[i];
				f[i] = f[j];
				f[j] = p;
			}
		}
	}
	display(f,n);
}
void delet(struct student f[],int p)
{
	char b[10];
	int i,j,k;
	printf("\nEnter the element: ");
	scanf("%s",b);
	for(i=0;i<n;i++)
	{
		k=strcmp(b,f[i].name);
		if(k==0)
		{
			for(j=i;j<n;j++)
			{
				f[j] = f[j+1];
			}
			n--;
			break;
		}
	}
	display(f,n);
}
