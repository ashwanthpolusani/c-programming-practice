union book
{
	char name[10];
	int pages;
	float price;
};
main()
{
	union book b;
	printf("\n Enter book name");
	scanf("%s",b.name);
	printf("name = %s",b.name);
	printf("\n Enter book pages");
	scanf("%d",&b.pages);
	printf("pages = %d",b.pages);
	printf("\n Enter book price");
	scanf("%f",&b.price);
	printf("price = %.2f",b.price);
}
