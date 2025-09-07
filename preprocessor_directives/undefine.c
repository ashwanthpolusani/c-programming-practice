#include<stdio.h>
#define true 1
#define false 0
int main()
{
	printf("true :%d\n",true);
	printf("false :%d\n",false);
	#undef true
	#undef false
	#define true 0
	#define false 1
	printf("true :%d\n",true);
	printf("false :%d\n",false);
	return 0;
}
