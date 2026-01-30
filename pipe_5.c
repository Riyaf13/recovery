#include<stdio.h>
#include<unistd.h>
int main()
{
	int plastic[2];
	char x;
	char client[100]="hello.c";
	char buffer[100];
	FILE *fp;

	int res =pipe(plastic);
	if(res==-1)
	{
		printf("error\n");
		return -1;
	}
	
	int pid =fork();
	if(pid==0)
	{
		//server
		read(plastic[0],buffer,100);
		fp=fopen(buffer,"r");
		while((x=getc(fp))!=EOF)
		{
			putc(x,stdout);
		}

	}
	else
	{
		//client
		write(plastic[1],client,100);
	}
}
