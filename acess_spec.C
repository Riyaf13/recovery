#include<iostream>
using namespace std;
class base
{
	public:
	int a;

	public:
	void set()
	{
		c=20;
	        a=10;
	}
	void get()
	{
		cout<<"c="<<c<<endl;
	}

	protected:
	int b;

	private:
	int c;
};
class derived:private base
{
	public:
	void show()
	{
		set();
		cout<<"a="<<a<<endl;
		b=15;
		cout<<"b="<<b<<endl;
		get();
	}
	public:
	void show_1()
	{
		show();
	}
};
int main()
{
	derived o;
	//o.a=10;
	//o.set();
	//o.set();
	o.show_1();
	//o.get();
}
