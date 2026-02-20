#include<iostream>
using namespace std;
class B;   // forward declaration 
class A
{
	int i;

	public:
	A(int i)
	{
		this->i=i;
	}
	friend void sum(A a,B b);
};
class B
{
	int j;

	public:
	B(int j)
	{
		this->j=j;
	}
	friend void sum(A a,B b);
};
void sum(A a,B b)
{
	cout<<a.i+b.j<<endl;
};
int main()
{
	A a(1);
	B b(2);
	sum(a,b);
}
