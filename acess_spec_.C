#include<iostream>
using namespace std;
class base
{
	public:
	int a;

	protected:
	int b;

	private:
	int c;
};
class derived:public base
{
	public:
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;

		}
};
int main()
{
	derived o;
	o.a=10;
	o.b=15;
	o.c=20;
	o.show();
}
