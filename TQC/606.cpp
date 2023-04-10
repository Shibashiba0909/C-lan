#include <stdio.h>
#include <stdlib.h>

int main()
{
	char id[3][6];
	int i;
	for(i=0;i<3;i++)
	{
	scanf("%s",id[i]);
	if(((id[i][0]+id[i][2]+id[i][4]-48*3)+(id[i][1]+id[i][3]-48*2)*5)%26 == id[i][5]-64)
	printf("Pass\n");
	else
	printf("False\n");
	}
}
