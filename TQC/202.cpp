#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score,score1;
	scanf("%d",&score);
	if(score<0 || score>100)
	{
		printf("error");
	}
	else if(score>60)
	{
		score1=score+10;
		printf("%d",score1);
	} 
	else
	{
		score1=score+5;
		printf("%d",score1);
	}
}
