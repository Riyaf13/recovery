#include<iostream>
using namespace std ;
class base
{
	public:
	virtual int sum(int i,int j)
	{
		return i+j;
	}
};
class derived:public base
{
	public:
	int sum(int i,int j)
	{
		return i+j+10;
	}
};
int main()
{
	base *b;
	derived d;
	b=&d;
	cout<<b->sum(1,2);
}
