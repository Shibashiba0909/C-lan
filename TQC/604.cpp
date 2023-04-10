#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[9],sum=0,i,j,tmp;
	for(i=0;i<9;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];	
	}
	for(i=0;i<9;i++)
	{	
		for(j=i+1;j<9;j++)
		{
			if(num[i]>num[j])
			{
				tmp=num[j];
				num[j]=num[i];
				num[i]=tmp;
			}
		}
	}
	for(i=0;i<9;i++)
		printf("%d\n",num[i]);
		printf("sum = %d\n",sum);
} 
