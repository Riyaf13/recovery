// now by using object array and parameterized constructor

#include<iostream>
using namespace std ;
class emp
{
	private:
	int i;
	public:

	emp(int value)
	{
		i=value;	
	}
	void get(void)
	{
		cout<<i<<endl;
	}
};
int main()
{
	emp e[3]={7,6,7};  // implicite direct pan deta yete 
			   // {emp(10),emp(20),emp(30)} second method
	
	for(int i=0;i<3;i++)
	{
		e[i].get();
	}
}
