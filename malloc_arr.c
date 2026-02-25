#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;

	arr=(int*)malloc(3);
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;

	printf("%d\t%d\t%d:",arr[0],arr[1],arr[2]);

	free(arr);
	return 0;
}
