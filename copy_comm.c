#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *cp,*fp;
	cp=fopen(argv[1],"r");

	fp=fopen(argv[2],"w");

	int x;
	while(x=getc(cp))
	{
		if(x==EOF)
			break;
		putc(x,fp);
	}
}
