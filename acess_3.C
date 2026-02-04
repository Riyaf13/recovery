//here due to public specifier everything can be access directly.
//and default constructor has been used . 

#include<iostream>
using namespace std;
class base
{
	public:
	int a;
	int b;
};
class derived:public base
{
	public:
	void show()
	{
		cout<<a<<endl;
		cout<<b<<endl;
	}
};
class derived2:public derived
{
	public:
	void show_1()
	{
		//show();
		cout<<"finish\n"<<endl;
	}
};
int main()
{
	derived2 d2;
	d2.a=10;
	d2.b=20;
	d2.show();
	d2.show_1();
}
