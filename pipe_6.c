#include<stdio.h>
#include<unistd.h>
int main()
{
	int plastic[2];
	int plastic_1[2];
	char filename[100]="hello.c";
	char buffer[100];
	char server_1[100];
	char client[100];
	int x=0;

	pipe(plastic);
	pipe(plastic_1);
	int i=fork();
	FILE *fp;
	int j=0;

	if(i==0)
	{
		//server
		read(plastic[0],buffer,100);
		fp=fopen(buffer,"r");
		while((x=getc(fp))!=EOF)
		{
			server_1[j++]=x;
		}
		write(plastic_1[1],server_1,100);
	}
	else
	{
		//client
		write(plastic[1],filename,100);
		read(plastic_1[0],client,100);
		
		printf("%s",client);
	}
}
