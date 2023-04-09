#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char a[8],b[8];
	int i,power=7,asum=0,bsum=0,sum=0;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<8;i++,power--)
	{
		if(a[i]=='1') asum+=pow(2,power);
		if(b[i]=='1') bsum+=pow(2,power);	
	}	
	sum=asum+bsum;
	printf("%d + %d = %d\n",asum,bsum,sum);
	char ans[8];
	power=7;
	for(i=0;i<8;i++,power--)
	{
		if(sum-pow(2,power)>=0)
		{
			sum-=pow(2,power);
			ans[i]=1;
		}
		else 
		ans[i]=0;
	}
	for(i=0;i<8;i++)
	{
		printf("%d",ans[i]);
	}
} 
