#include<stdio.h>
#include<unistd.h>
int main()
{
	int plastic[2];
	char message[15]="hello";
	char buffer[15];

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
		//child ka karte read
		read(plastic[0],buffer,15);
		printf("child data:%s\t%d\t%d\t",buffer,getpid(),getppid());
	}
	else
	{
		//client
		//parent ka karte write
		write(plastic[1],message,15);
		printf("parent's mess:%s\t%d\t%d\t",message,getpid(),getppid());
	}
}
