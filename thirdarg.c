#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char* argv[], char* env[])
{
	int i,j;

	char *user=getenv("USER");

	if((strcmp(user,argv[1]))==0)
	{
		i=atoi(argv[2]);
		j=atoi(argv[3]);

		int sum=i+j;
		printf("%d\n",sum);
	}
	//printf("%s", user);
}
