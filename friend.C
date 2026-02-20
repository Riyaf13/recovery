#include<iostream>
using namespace std;
class abc
{
	int i, j;
	public:
	abc()
	{
		this->i=10;
		this->j=67;
	}
	friend int sum();
};
int sum(void)
{
	return i+j;
};		
int main()
{
	abc obj1;
	obj1.sum();
	cout<<"sum="<<obj1.sum<<endl;
}
