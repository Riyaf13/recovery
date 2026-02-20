#include<iostream>
using namespace std;
class emp
{
	int i;
	public:
	emp(int i)
	{
		this->i=i;
	}
	void get(void)
	{
		cout<<i<<endl;
	}
};
int main()
{
	emp e[3];
	cout<<sizeof(e)<<"\n";
	cout<<sizeof(class emp)<<"\n";
	emp *e1=e;
	for(int i=0;i<3;i++)
	{
		e1->get();
		e1++;
	}
}
