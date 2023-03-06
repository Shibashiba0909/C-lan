#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score,total;
	scanf("%d",&score);
	if(score<0 || score>100)
	{
		printf("error");
	}
	else if(score>60)
	{
	    total=score+10;
		printf("%d",total);
	}
	else
	{
		total=score+5;
		printf("%d",total);
	}
}
