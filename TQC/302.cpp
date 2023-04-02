#include <stdio.h>
#include <stdlib.h>

char compute(int score)
{
	if(score<0 || score>100)
	return -1;
	
	else if(score>=60)
	score+=5;
	
	else 
	score+=10;
	
    return score;
}

int main()
{
	int final,score;
	scanf("%d",&score);
	final=compute(score);
	printf("%d",final);
}

