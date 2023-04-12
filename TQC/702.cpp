#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char s[10];
	int ans=0,i,p;	
	scanf("%s",s);
	for(i=0,p=strlen(s)-1;i<strlen(s);i++,p--)
	{
		if(s[i]=='1')
			ans+=pow(2,p);
	}
	printf("%d\n",ans);
} 
