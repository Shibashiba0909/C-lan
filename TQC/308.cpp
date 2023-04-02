#include <stdio.h>
#include <stdlib.h>

int compute(int n)
{
	if(n<=2)
	return 1;
	else 
	return compute(n-1)+compute(n-2);
}

int main()
{
	int i,n,a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=compute(i+1);	
	}
	for(i=n-1;i>=0;i--)
	printf("fib(%d)=%d\n",i+1,a[i]);
}
