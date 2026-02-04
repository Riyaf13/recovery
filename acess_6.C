//and default constructor has been used . 

#include<iostream>
using namespace std;
class base
{
	private:
	int a;
	int b;
	public:
	void set()
	{
		a=10;
		b=15;
	}
	void get()
	{
		cout<<a<<endl;
		cout<<b<<endl;
	}
};
class derived:public base
{
	public:
	void show()
	{
		set();
		get();
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
	d2.set();
	d2.get();
	d2.show();
	d2.show_1();
}
