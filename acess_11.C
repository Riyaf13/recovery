// private --- private

#include<iostream>
using namespace std;
class base
{
	protected:
	int a;
	int b;
};
class derived:private base
{
	/*
	 * private:
	 * int a;
	 * int b;
	 */

	public:
	
	void show()
	{
		a=10;
		cout<<"a="<<a<<endl;
		b=20;
		cout<<"b="<<b<<endl;
	}	
};
class derived2:private derived
{
	/*
	 * private:
	 * show();
	 **/
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
