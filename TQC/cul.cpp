#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,ans;
    char c;
    scanf("%d %d %c",&a, &b, &c);
    if(c=='+')
    {
    	ans=a+b;
    }
	else if(c=='-')
	{
	    ans=a-b;
	}
	else if(c=='*')
	{
		ans=a*b;
	}
	else
	{
		printf("error");
		return 0;
	}
	printf("%d%c%d=%d",a,c,b,ans);
}
