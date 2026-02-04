//here default constructor is used 

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
class derived:private base
{
	public:
	void show()
	{
		set();
		get();
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
