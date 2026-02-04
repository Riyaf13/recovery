#include<iostream>
using namespace std;
class employee
{
	private:
	int i;
	int j;
	public:
	employee()
	{
	}
	employee(int i, int j)
	{
		this->i=i;
               cout << "I am Constructor" << endl;	

	}
	void print_val(void)
	{
		cout<<i<<"\n"<<j<<endl;
	}
};
int main()
{
	employee e(12,13);
	employee o;
	e.print_val();
}
