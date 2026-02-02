#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int res;
	char client[100]="hello.c";
	char buff[100];
	char store[100];
	char show[100];
	int x;
	int j=0;
	FILE *fp;
	int i=fork();
	int res_1;
	if(i==0)
	{
		//child
		res=open("riya_2",O_RDONLY);
		read(res,buff,100);
		fp=fopen(buff,"r");
		while((x=getc(fp))!=EOF)
		{
			store[j++]=x;
		}
		res_1=open("riya_3",O_WRONLY);
		write(res_1,store,100);
	}
	else
	{
		//parent
		res=open("riya_2",O_WRONLY);
		write(res,client,100);
		res_1=open("riya_3",O_RDONLY);
		read(res_1,show,100);
		printf("%s",show);
	}
}
