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
	void add(void)
	{
		cout<<i+j<<endl;
	}
};		
int main()
{
	abc obj1;
	obj1.add();
}
