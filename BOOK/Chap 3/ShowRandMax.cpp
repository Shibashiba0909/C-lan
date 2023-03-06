#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a,max;
	srand(time(NULL));
	a=max+rand();
	printf("The maximum random number is %d",a);
}
