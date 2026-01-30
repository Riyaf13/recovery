#include<stdio.h>
#include<unistd.h>
int main()
{
	int plastic[2];
	char parent[15]="hello";
	char child[15];

	int res =pipe(plastic);
	if(res==-1)
	{
		printf("error\n");
		return -1;
	}
	int pid =fork();
	if(pid==0)
	{
		//child ka karte read
		read(plastic[0],child,15);
		printf("child data:%s\t%d\t%d\t",child,getpid(),getppid());
	}
	else
	{
		//parent ka karte write
		write(plastic[1],parent,15);
		printf("parent's mess:%s\t%d\t%d\t",parent,getpid(),getppid());
	}
}
