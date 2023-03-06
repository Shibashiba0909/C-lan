#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	float d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a>60)&&(a<100))
	{
		printf("1\n");
	} 
	else 
	{
		printf("0\n");
	}
	d=float(b+1)/10;
	printf("%.2f\n",d);
    if(a>c)
    {
    	printf("%d",a);
	}
	else
	{
		printf("%d",c);
	} 
}
