#include <stdio.h>
#include <stdlib.h>

int compute(int a[])
{
	int i,n=0;
	for(i=0;i<6;i++)
	if(a[i]%3==0)
	n++;
	return n;
}	

int main()
{
	int n,b[6],i;
	for(i=0;i<6;i++)
	scanf("%d",&b[i]);
	printf("%d",compute(b));
} 
