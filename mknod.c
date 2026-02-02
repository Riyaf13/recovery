#include<stdio.h>
#include<sys/stat.h>
int main()
{
	int res;
	res =mknod("riy", S_IFIFO|0666,0);
	if(res==-1)
	{
		printf("error\n");
	}
	else
	{
		printf("successfully created\n");
	}
}
