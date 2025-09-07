#include<stdio.h>
#define country "India"
int main()
{
	#ifdef country
	printf("Country is defined\n");
	#endif
	#ifndef state
	printf("state is not defined\n");
	#define state "Patna"
	#endif
	printf("state is :%s",state);
}
