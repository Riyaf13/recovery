//here we used the new memory allocation by using constructor 
//new call the constructor and uses the pointer object
//delete means deallocation used the destructor in order to delete the space which created by the new itself
//the pointer pointing to the function to call  
//new always store memory on the heap and never on the stack 
//if we are using both stack and heap in one so add default constructor too 

#include<iostream>
using namespace std;
class emp
{
	int i;
	public:
	emp()
	{

	}
	emp(int i)
	{
		this->i=i;
	}
	void show()
	{
		cout<<"i="<<i<<endl;
	}
	~emp()
	{
		cout<<"destructor"<<endl;
	}
};
int main()
{
	emp e;               // it is the stack allocation
			     // this uses the default constructor  
	emp *e1=new emp(10);   // 10 is the parameter/araguments as it is parameterised constructor
			      // this is the heap allocation 
	e1->show();

	delete e1;
}
