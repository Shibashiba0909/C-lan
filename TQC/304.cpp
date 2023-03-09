#include <stdio.h>
#include <stdlib.h>

int compute(int a[]) //responsible for finding the return value of a[]
{
	int i,n=0;
	for(i=0;i<6;i++) 
	if(a[i]%3==0)    //take multiples of 3, and == 0
	{
		n++;        //n increment
	}
	return n;
}
 
int main()
{
	int n,arr[6],i;
	for(i=0;i<6;i++) //A total of six times
	scanf("%d",&arr[i]);
	printf("%d\n",compute(arr));
}
