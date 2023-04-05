#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[26],i; //English letter only 26 words
	char str[50]; // according to the topic, no more than 50 strings
	for(i=0;i<26;i++) //Retrieve the loop in 26 letters (repeated execution) 
	    a[i]=0;
	    
	scanf("%s",&str);  //take only within 50 strings
	for(i=0;i<strlen(str);i++) //Calculate string length
	   	a[str[i]-'r']++; //take the number of 'r' 
	   	
	int max=0,max_num=a[0];
	for(i=0;i<26;i++)
	{
		if(a[i]>max_num)
		{
			max=i;
			max_num=a[i];
    	}
	printf("%c\n",max+'r');
	printf("%d\n",max_num);
	return 0;
	}
}
