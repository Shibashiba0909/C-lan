#include <stdio.h>

int main()
{
	int a[10], count=3, i, j;
	for(i=0; i<4; i++) scanf("%d", &a[i]);
	FILE *f = fopen("read.txt", "r");
	while(fscanf(f, "%d", &a[++count]) != EOF);
	for(i=0; i<count; i++)
	{
		for(j=i+1; j<count; j++)
		{
			if(a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	FILE *f2 = fopen("write.txt", "w"); 
	for(i=0; i<count; i++)
	{
		printf("%d\n", a[i]);
		fprintf(f2, "%d\n", a[i]);
	}
} 
