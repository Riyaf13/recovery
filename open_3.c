// now both in single code 

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int res;
	res=open("riya",O_RDWR);
	write(res,"hello World",12);
	char buff[25];
	read(res,buff,25);
	printf("%s",buff);
}
