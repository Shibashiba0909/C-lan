#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int d=a,e=b;
	while(b!=0)
	{
		int c=a%b;
		a=b;
		b=c;
	} 
	printf("%d\n%d\n",a,d*e/a);
}
