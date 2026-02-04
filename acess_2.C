#include<iostream>
using namespace std;
class base
{
	private:
	int a;
	
	protected:
	int b;

	public:
	void set()
	{
		a=10;
	}
	void get()
	{
		cout<<a<<endl;
	}
};
class derived:private base
{
	public:
	void show()
	{
		set();
		get();
		b=15;
		cout<<b<<endl;
	}	
};
class derived2:private derived
{
	public:
	void show_1()
	{
		show();
	}	
};
int main()
{
	derived2 d2;
	d2.show_1();
}
