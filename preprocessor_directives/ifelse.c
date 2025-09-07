#include<stdio.h>
#define runs 60
main()
{
	#if runs>=100
	printf("century");
	#else
	printf("Not a century");
	#endif
}
