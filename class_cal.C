#include<iostream>
using namespace std;
class calci
{
	private:
	int i;
	int j;

	public:
	calci(int i,int j)
	{
		this->i=i;
		this->j=j;
	}

	~calci()  // its destructor which perform after the completion of the constructor like cleaner and destroy the object 
	{
		i=0;
		j=0;
		cout << "Destructor called";
	}
	void add(void)
	{
		cout<<"sum:"<<i+j<<endl;
	}
	void sub(void)
	{
		cout<<"sub:"<<i-j<<endl;
	}
	void multi(void)
	{
		cout<<"multiply:"<<i*j<<endl;
	}
	void div(void)
	{
		cout<<"divide:"<<i/j<<endl;
	}
	void mod(void)
	{
		cout<<"mod:"<<i%j<<endl;
	}
	void val(void)
	{
		cout<<"num1:"<<i<<"\n"<<"num2:"<<j<<endl;
	}
};
int main()
{
	calci c(10,2);
	c.val();
	c.add();
}
