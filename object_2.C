#include<iostream>
using namespace std;
class check
{
	int j;
	public:
	void set(int value)
	{
		j=value;

	}
	int get(void)
	{
		return j;
	}
};
check fun()
{
	check c;
	c.set(20);
	return c;
}
int main()
{
	check ob;
	ob=fun();
	cout<<ob.get()<<endl;
}
