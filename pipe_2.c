#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include"concat_comm.c"
int main()
{
	int plastic[2];
	char parent[15]="hello";
	char child[15];

	int res=pipe(plastic);
	if(res==-1)
	{
		printf("error\n");
		return -1;
	};
	write(plastic[1],parent,15);
	read(plastic[0],child,15);

	concat(child,"world");
	//strcat(child,"world");

	printf("child data :%s\t",child);

	int plastic_2[2];
	char child_1[15];
	char parent_1[15];

	int res_1=pipe(plastic_2);

	strcpy(child_1,child);
	printf("\nchild_1 data: %s\t",child_1);

	write(plastic_2[1],child_1,15);
	read(plastic_2[0],parent_1,15);

	printf("\nparent_1 data :%s\t",parent_1);

}
