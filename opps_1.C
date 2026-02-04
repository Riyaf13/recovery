using namespace std;
#include<iostream>
#include<cstdio>
struct emp
{
	private://data not shared
	int i;
	int j;

	private://subroutine shared
	void set_i(int i)
	{
		this->i=i; // this is the pointer which store the address of the object 
	}
	void set_j(int j)
	{
		this->j=j;
	}
	int get_i(void)
	{
		return i;
	}
	int get_j(void)
	{
		return j;
	}

	public:
	void values(int a,int b)
	{
		set_i(a);
		set_j(b);
	}
	void print(void)
	{
		printf("%d\n",get_i());
		printf("%d\n",get_j());
	}
};
int main()
{
	emp e;
	e.values(20,15);
	e.print();
	/*e.set_i(20);
	int res_i=e.get_i();
	printf("%d\n",res_i);

	e.set_j(15);
	int res_j=e.get_j();
	printf("%d\n",res_j);*/
}
