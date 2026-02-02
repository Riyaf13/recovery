#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int res;
	char buff[100];
	res=open("riy",O_RDONLY);
	if(res==-1)
	{
		printf("error\n");
	}
	else
	{
		int r=read(res,buff,100);
		printf("%s",buff);
	}
}
