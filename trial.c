#include<stdio.h>
#include<unistd.h>
int main()
{
	int i=fork();
	if(i==0)
	{
		printf("child process \t child_id\tself %d\t%d\t%d\n",i,getpid(),getppid());
	}
	else
	{
		printf("\nparent process\tchild_id\tself %d\t%d\t%d\t",i,getpid(),getppid());
	}
}
