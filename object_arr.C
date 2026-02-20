// now by using object array

#include<iostream>
using namespace std ;
class emp
{
	private:
	int i;
	public:
	void set(int value)
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
	emp e[3];
	e[0].set(10);
	e[1].set(20);
	e[2].set(30);

	for(int i=0;i<3;i++)
	{
		e[i].get();
	}

}
