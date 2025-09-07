#include<stdio.h>
#define a 30
#define b 40
#define c 36
main()
{
	#if a>b&&a>c
	printf(" a is greater");
	#elif b>a&&b>c
	printf(" b is greater");
	#else
	printf(" c is greater");
	#endif
}
