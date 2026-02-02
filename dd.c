#include<stdio.h>
#include <unistd.h>
int main()
{
	int i=0;

	while(i++<=10)
	{
		write(1,"hello",6);
		printf("hii");  // printf is the buffer having size 1064 
		sleep(1);
	//	write(1,"hello",6);
	}
	// in this if you write "write" first then printf then write hello is right  but if you write "write" after the printf still it write the "hello" be           because printf is buffer vo try karta ki jab tab mere capacity hai tab tak input aate rahe but code he end ho jaata isliye vo badme execute hota            but write asa nahi hai so vo sleep means interval of 1 sec ke baat run ho jaata hai simple .
}
