#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int age;
	float marks;
};
void read(struct student []);
void display(struct student []);
int marks(struct student [],int);
int name(struct student []);
void sort(struct student []);
void search(struct student []);
void ageincr(struct student [],int);
void marksincr(struct student [],int);
int i,j,a,r,n;
FILE *f1;
struct student f[10];
main()
{
	int x;
	char ch;
	f1=fopen("D:/editor/student.txt","r");
	for(i=0;fscanf(f1,"%s%d%f",f[i].name,&f[i].age,&f[i].marks)!=EOF;i++)
	{
	}
	n=i;
	fclose(f1);
	printf("n== %d",n);
	do
	{
		printf("\n1.read\n2.print\n3.search\n4.sort\n5.delete");
		printf("\nEnter the choice:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:read(f);
					break;
			case 2:display(f);
					break;
			case 3:search(f);
					break;
			case 4:sort(f);
					break;
			case 5:delet(f);
					break;
			default:printf("\n Choose correct option");
		}
		printf("\nPress y to continue ");
		scanf(" %c",&ch);
	}while(ch=='y');
}
void display(struct student f[])
{
	f1=fopen("D:/editor/student.txt","r");
	printf("\n The data in the file is ");
	printf("\n| S.No |   Name   | Age |  Marks  |\n");
	for(i=0;fscanf(f1,"%s%d%f",f[i].name,&f[i].age,&f[i].marks)!=EOF;i++)
	{
		for(j=0;j<35;j++)
			printf("-");
		fprintf(stdout,"\n|  %2d. |%8s  |%4d |%8.2f |\n",i+1,f[i].name,f[i].age,f[i].marks);
	}
	fclose(f1);
}
void read(struct student f[])
{
	f1=fopen("D:/editor/student.txt","a");
	printf("\n Enter data into the file\n");
	for(i=n;fscanf(stdin,"%s%d%f",f[i].name,&f[i].age,&f[i].marks)!=EOF;i++)
	{
	fprintf(f1,"%s\t%d\t%f\n",f[i].name,f[i].age,f[i].marks);
	}
	n=i;
	fclose(f1);
	append(f);
}
void search(struct student f[])
{
	i=0;
	printf("\n Enter search type\n");
	printf("1.name\n2.age\n3.marks");
	scanf("%d",&a);
	switch(a)
	{
		case 1:i=name(f);
			break;
		case 2:i=marks(f,1);
			break;
		case 3:i=marks(f,2);
			break;
		default:printf("\nout\n");
	}
	if(i==1)
	printf("\nelement found at position %d",r);
	else
	printf("\nelement not found");
}
void sort(struct student f[])
{
	printf("\n Enter sort type\n");
	printf("1.age increment\n2.age decrement\n3.marks increment\n4.marks decrement\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:ageincr(f,1);
			break;
		case 2:ageincr(f,2);
			break;
		case 3:marksincr(f,1);
			break;
		case 4:marksincr(f,2);
			break;
		default:printf("\nout\n");
	}
}
int name(struct student f[])
{
	char b[10];
	r=0; 
	int flag=0,k=9;
	printf("\nEnter the element: ");
	scanf("%s",b);
	printf("%d",n);
	f1=fopen("D:/editor/student.txt","r");
	for(i=0;i<n;i++)
	{
		k=strcmp(b,f[i].name);
		if(k==0)
		{
			flag=1;
			r=i+1;
		}
	}
	return flag;
	fclose(f1);
}
int marks(struct student f[],int m)
{
	float x,flag=0;
	r=0;
	printf("\nEnter the element: ");
	scanf("%f",&x);
	f1=fopen("D:/editor/student.txt","r");
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
	fclose(f1);
}
void ageincr(struct student f[],int m)
{
	f1=fopen("D:/editor/student.txt","a");
	struct student p,q[n];
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
				fclose(f1);
				f1=fopen("D:/editor/student.txt","a");
				p = f[i];
				f[i] = f[j];
				f[j] = p;
				fclose(f1);
			}
		}
	}
	for(i=0;i<n;i++)
	q[i]=f[i];
	fclose(f1);
	append(f);
	display(f);
}
void marksincr(struct student f[],int m)
{
	struct student p;
	f1=fopen("D:/editor/student.txt","a");
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
	fclose(f1);
	append(f);
	display(f);
}
void delet(struct student f[])
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
	append(f);
	display(f);
}
void append(struct student f[])
{
	f1=fopen("D:/editor/student.txt","w");
	for(i=0;i<n;i++)
	{
	fprintf(f1,"%s\t%d\t%f\n",f[i].name,f[i].age,f[i].marks);
	}
	fclose(f1);	
}
