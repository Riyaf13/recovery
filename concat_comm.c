#include<stdio.h>
void concat(char a[],char b[])
{
	int i,j;
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("the joined %s",a);
}

