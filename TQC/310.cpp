#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compute(int n)
{
	int a,b,c,d,e,f=0,i;
	for(i=1;i<n;i++)
	{
		a=i/100; //take hundreds digits
		b=(i/10)%10; //take tens digits
		c=i%10; //take digits
	    if(i<10)
	    {
		    d=1;
	    }
	    else if(i<100)
	 	{
			d=2;
		}
		else
		{
			d=3;
		}
	
		e=pow(a,d)+pow(b,d)+pow(c,d);
	
		if(e==i)
		{
			printf("%d\n",e);
			f=f+e;
		}
    }
    return f;
}

int main()
{
	int n;
	scanf("%d",&n);
	if(n>0&&n<1000)
	{
		printf("%d",compute(n));
	}
}

