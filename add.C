#include<iostream>
using namespace std;
class abc
{
	int i, j;
	public:
	int add(int i, int j)
	{
	int d =i+j;
	return d;
	}
};		
int main()
{
	abc obj;
	int res=obj.add(10,15);

	cout<<res<<endl;
}
