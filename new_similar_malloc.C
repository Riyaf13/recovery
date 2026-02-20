#include<iostream>
#include<cstring>
using namespace std;
class emp
{
	public:
	int id;
	char name[5];
};
int main()
{
//	emp e;            // stored in stack 
	emp* e=new emp;   //stored in heap
	e->id=101;
	strcpy(e->name,"riya");

	cout<<"id:"<<e->id<<endl;
	cout<<"\nname:"<<e->name<<endl;

	delete e;  // free space memory

	return 0;
}
