#include <stdio.h>
#include <stdlib.h>

char compute(int score)
{
if(score<0 || score>100)
	return -1;
if(score>=60) score+=5;
else score+=10;

return score;
}

int main()
{
	int score,final;
	scanf("%d",&score);
	final = compute(score);
	printf("%d",final);
}
