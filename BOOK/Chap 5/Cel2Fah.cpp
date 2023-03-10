#include <stdio.h>
#include <stdlib.h>

int main()
{
	double Cel,Fah;
	printf("Cel:");
	scanf("%lf",&Cel);
	Fah=Cel*9/5+32;
	printf("Fah:%.2f",Fah);
} 
