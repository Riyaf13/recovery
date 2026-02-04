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
class derived:protected base
{
	private:
	void check()
	{
		cout<<"visibile\n"<<endl;
		test();
		start();
	}
	public:
	void check_1()
	{
		check();
	}
};
int main()
{
	derived o;
	o.check_1();
	//o.start();
	//o.go();
	//o.test();
}
