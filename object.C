#include<iostream>
using namespace std;
class A
{
	public:
	int i;

	A(int i)
	{
		this->i=i;
	}

	friend int object(A a);
};
int object(A a)
{
	return a.i;
	return a;
};
int main()
{
	A a(10);
	object();
}

