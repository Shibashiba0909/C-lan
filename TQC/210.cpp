#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int c=a,d=b;
	while(b!=0)
	{
		int c=a%b;
		a=b;
		b=c;
	}
	printf("%d\n",a);
	printf("%d\n",c*d/a);
}
