#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(5);
	*p=10;
	printf("%d\n",*p);
}
