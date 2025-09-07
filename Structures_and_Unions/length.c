#include<stdio.h>
struct length
{
	int ln_feet;
	int ln_inches;
}d1,d2;
main()
{
	int x,y;
	struct length d1;
	printf("\n enter the first details");
	scanf("%d%d",&d1.ln_feet,&d1.ln_inches);
	printf("\n enter the second details");
	scanf("%d%d",&d2.ln_feet,&d2.ln_inches);
	x=d1.ln_feet+d2.ln_feet;
	y=d1.ln_inches+d2.ln_inches;
	if(y>=12)
	{
		x=x+y/12;
		y=y%12;
	}
	printf("\nfeet = %d\ninches = %d",x,y);
}
