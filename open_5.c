#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int res;
	char buff[100];
	char client[100]="hello.c";
	int i=fork();
	FILE *fp;
	char x;
	if(i==0)
	{
		//child
		res=open("riya",O_RDONLY);
		read(res,buff,100);
		fp=fopen(buff,"r");
		while((x=getc(fp))!=EOF)
		{
			putc(x,stdout);
		}
	}
	else
	{
		//parent
		res=open("riya",O_WRONLY);
		write(res,client,100);
	}

}
