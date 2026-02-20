// constructor overloading 

#include<iostream>
using namespace std;
class base
{
	int i,j;
	public:
	base()
	{
		this->i=10;
		this->j=15;
	}
	base(int i,int j)
	{
		this->i=i;
		this->j=j;
	}
	void print(void)
	{
		cout<<i+j<<endl;
	}

};
int main()
{
	base obj1;
	base obj2(10,15);
	obj1.print();
	obj2.print();

}
