// now by using forking 


#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int res;
	int i =fork();
	char buff[25];
	if(i==0)
	{
		//child karega read
		res=open("riy",O_RDONLY);
		read(res,buff,25);
		printf("%s",buff);
	}
	else
	{
		//parent karega write
		res=open("riy",O_WRONLY);
		write(res,"helloWorld",10);
	}

}
