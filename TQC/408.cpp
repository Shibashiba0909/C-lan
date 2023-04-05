#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compute(char str[]);
int main()
{
	char str1[20],str2[20],str3[20];
	scanf("%s %s",str1,str2);    //str is not adress so no &
	if(strlen(str1)<=3||strlen(str2)<=3||strlen(str1)>20||strlen(str2)>20)
		printf("error\n");
	else
	{
		printf("%d\n%d\n",strlen(str1),strlen(str2));
		strcpy(str3,str1);
		strcat(str3,str2);
		compute(str3);
	}
	return 0;
} 

void compute(char str[])
{
	int i=0,j=0;
	while(str[i]!='\0')
	    i++;  //=i+1
	for(j=i-1;j>0;j--)
	    printf("%c",str[j]);
}
