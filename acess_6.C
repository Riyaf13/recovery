// protected ----public

#include<iostream>
using namespace std;
class base
{
	protected:
	int a;
	int b;
};
class derived:protected base
{
	/*
	 * protected:
	 * int a;
	 * int b;
	 */

	/*public:
	
	void show()
	{
		a=10;
		cout<<"a="<<a<<endl;
		b=20;
		cout<<"b="<<b<<endl;
	}*/	
};
class derived2:public derived
{
	/*
	 * public:
	 * show();
	 **/
	public:
	void show_1()
	{
		a=10;
		b=15;
		//show();
	}
};
int main()
{
	derived2 d2;
	d2.show_1();
	//d2.show();
}
