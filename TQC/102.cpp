#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int n)
{
	int i, total=0;
	for(i=0;i<n;i++)
		total +=arr[i];
	return total;
}
