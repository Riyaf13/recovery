#include<stdio.h>
#include<unistd.h>
int main()
{
	int plastic[2];
	char store[300];
	char temp[500];
	FILE *cp;
	cp=fopen("hello.c","r");
	//strcpy(temp,cp);

	int x;
	while(x=getc(cp))
	{
		if(x==EOF)
			break;
		putc(x,temp);
	}

	int res=pipe(plastic);
	if(res==-1)
	{
		printf("error\n");
		return -1;
	};
	write(plastic[1],temp,200);
	read(plastic[0],store,300);

	printf("data \n%s",store);
}

