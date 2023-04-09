#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,a[10],i=0,sum=1,j;
	scanf("%d",&num);
	if(num==0)
		printf("0=0\n");
	else 
	{
		while(num>0)
		{
			a[i]=num%10;
			sum*=a[i];
			num/=10;
			i++;
		}
		for(j=i-1;j>=0;j--)
		{
			printf("%d",a[j]);
			if(j!=0)
			printf("*");
		}
		printf("=%d\n",sum);
	}
}
