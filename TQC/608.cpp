#include <stdio.h>
#include <stdlib.h>

int compute(int *a)
{
	long long int base = 0;
	int i,point = 0;
	for(i=0;i<10;i++)
	{
		if(base==0)
		{
			base+=1;
			base = base << a[i]-1; //left move
		}
		else 
		switch(a[i])
		{
			case 0:
				break;
			case 1:
				base = base << 1;
				base += 1; //2^0=1
				break;
			case 2:
				base = base << 2;
				base += 2; //2^1=2
				break;
			case 3:
				base = base << 3;
				base += 4; //2^2=4
				break;
			case 4:
				base = base << 4;
				base += 8; //2^3=8
				break;
			default:
				break; 
		}
	}	
	base = base >> 3; //right move
	while(base != 0) 
	{
		if(base & 1) //& is operator
		{
			point++;
			base = base >> 1; 
		}
		else
		{
			base = base >> 1;
		}
	}
	return point;
} 

int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("score = %d\n",compute(a));
}

