//here we used the pointer array by using paramereterized constructor  
//the new calls the constructor and delete calls the destructor 
//sthe pointer array is on the stack we just extend it to its memory that is called heap 
//heap is unlimited and stack is limited
//e1 is an array of 3 pointers to emp

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
	emp e;
	emp *e1[3];  // it is the pointer array on the stack 
	e1[0]=new emp(10);  //returning object on the heap 
			    //return its address
			    //and stored in the e1[0];
	e1[1]=new emp(20);
	e1[2]=new emp(30);

	for(int i=0;i<3;i++)
	{
		e1[i]->show();  //access the object on the heap 
	}
	
	delete e1[0];   //deleting the heap memory 
			//call the destructor 
	delete e1[1];
	delete e1[2];
}
