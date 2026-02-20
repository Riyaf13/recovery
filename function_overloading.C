//it is function overloading 
//when function name are same it is called name mangling

#include<iostream>
using namespace std;
class abc
{
	int i, j;
	public:
	int add(int i, int j,int k)
	{
		int d =i+j+k;
		return d;
	}
	int add(int i,int j)
	{
		int d=i+j;
		return d;
	}
};		
int main()
{
	abc obj1;
	int res=obj1.add(10,15);

	cout<<res<<endl;
}
