#include<iostream>
using namespace std;
class emp
{
	int i;
	int j;

	public:
	emp(int i,int j)
	{
		this->i=i;
		this->j=j;
	}
	friend void show(emp);
};	
void show(emp e)
{
	cout<<e.i<<e.j<<endl;
};

int main()
{
	emp e(1,2);
	show(e);
}
