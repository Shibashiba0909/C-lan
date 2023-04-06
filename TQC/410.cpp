#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //"is" prefix

int main()
{
	int line,line_count=0;
	scanf("%d",&line);
	FILE *read=fopen("read.txt","r");    //FILE and fopen = Is a pointer type to a file, used to represent an open file stream
	FILE *write=fopen("write.txt","w");
	char buf[100];  //buf = usually means buffer
	while(fgets(buf,100,read)!=NULL)  //fgets = Read a line of characters from the file area
	{
		int i;
		line_count++;
		int len=strlen(buf);   // strlen = string length
		if(isalpha(buf[0]))    //isalpha = Tests if a character is a letter 
			buf[0]=toupper(buf[0]); //toupper = Convert characters to uppercase letter
		for(i=1;i<len;i++)  //len = May indicate the length of the string
		{
			if(buf[i-1]==' '&&isalpha(buf[i]))
			{
				buf[i]=toupper(buf[i]);
			}
		}
		printf("%s",buf);
		fputs(buf,write);  //fputs = write a line of characters to a file
		if(line==line_count)
			break;
	}
	fclose(read);   //close an open file
	fclose(write);
	return 0;
} 
