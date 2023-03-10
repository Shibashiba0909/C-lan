#include <stdio.h>
#include <stdlib.h>

int main()
{
	float USD,TWD,USDB,TWDB
	scanf("%f",&USD);
	TWD=USD*30.87;
	printf("%.2f USD=?TWD:%.2f\n",USD,TWD);
	
	scanf("%.f",&USDB);
	printf("%How much USD dollar? %.2f\n",USDB);
	TWDB=USDB*30.87-0.025;
	printf("You can get %.3f TWD",TWDB);
} 
