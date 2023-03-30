#include <stdio.h>
#include <stdlib.h>

int main()
{
	int d;
	float a,r;
	scanf("%d",&d);
	r=d/2;
	a=r*r*3.1415;
	printf("%-10d\n",d);
	printf("%-10.2f\n",r);
	printf("%-10.4f",a);
}
