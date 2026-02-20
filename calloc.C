// calloc allocated in the memory 
// it also not used the constructor and destuctor 
// it ininitialized the memory to zero 
// it is safe for memory allocation 
// it firstly initernally check before the chance of overflow
// if overflow occure the it return the null value 
// here 5 is the no of elements
// malloc not ininitilized  

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int *p;
	p=(int*)calloc(5,sizeof(int));

	for(int i=0;i<5;i++)
	{
		p[i]=i*10;
	}
	for(int i=0;i<5;i++)
	{
		printf("Address %p\t Value %d\n", &p[i], p[i]);
	}
	
	free(p);
}
