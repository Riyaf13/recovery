#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *arr;

	arr=(char*)malloc(4*1);

	arr[0]='r';
	arr[1]='i';
	arr[2]='y';
	arr[3]='a';

	printf("%c->%c->%c->%c:",arr[0],arr[1],arr[2],arr[3]);
}
