#include <stdio.h>
#include <stdlib.h>

int compute(int a[]) //responsible for finding the return value of a[]
{
	int i,n=0;
	for(i=0;i<6;i++) //A total of six times
	if(a[i]%3==0)    //take multiples of 3
	{
		n++;
	}
	return n;
}
 
int main()
{
	int n,ab[6],i;
	for(i=0;i<6;i++)
	scanf("%d",&ab[i]);
	printf("%d\n",compute(ab));
}
