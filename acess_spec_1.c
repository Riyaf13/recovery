#include<iostream>
using namespace std;
class base
{
	public:
	void start()
	{
		cout<<"hello\n"<<endl;
	//	go();
	}
	private:
	void go()
	{
		cout<<"world\n"<<endl;
	}
	protected:
	void test()
	{
		cout<<"learning\n"<<endl;
		go();
	}
};
class derived:public base
{
	public:
	void check()
	{
		cout<<"visibile\n"<<endl;
		test();
	//	start();
	}
};
int main()
{
	derived o;
	o.check();
	o.start();
	//o.go();
	//o.test();
}
