#include<stdio.h>
#include<unistd.h>
int main()
{
	int plastic[2];
	char  store[5];
	int res = pipe(plastic);
	if(res == -1)
	{
		printf("error in Pipe");
		return -1;
	};
	write(plastic[1], "riya", 5);
	read(plastic[0], store ,5);

	printf("Data Received in read end %s", store);
}
