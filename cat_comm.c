#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *cp;
	int x;
	cp=fopen(argv[1],"r");

	while(x=getc(cp))
	{
		if(x==EOF)
			break;
		putc(x,stdout);
	}
}
