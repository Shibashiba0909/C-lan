#include <stdio.h>
#include <stdlib.h>

int compute(int n)
{
	if(n==0)
	return 1;
	if(n>=1)
	return n*compute(n-1); 
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d!=%d",n,compute(n));
}
