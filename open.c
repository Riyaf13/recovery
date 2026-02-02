#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int res;
	res=open("riy",O_RDWR);
	if(res==-1)
	{
		printf("error\n");
	}
	else
	{
	     	int r=write(res,"hello",5);
		printf("%d\n",r);
		
	}
}
