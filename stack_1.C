#include<iostream>
using namespace std;
class stack
{
	int arr[5];
	int count;

	public:
	void push(int value)
	{
		arr[count]=value;
		count++;
	}

};
int main()
{
	stack o;
	o.push(10);
}

