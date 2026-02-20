#include <iostream>
using namespace std;
class emp
{
	int i;
	public:
	void set(int k)
	{
		i=k;
	}
	int get(void) 
	{
	       return i;
	}
};
emp function(void)  //this is the seperate function which carry the return value of object and here emp is act like the data type 
{
	emp  ob;
	ob.set(90);
	return ob;
}
int main()
{
	emp e;
	e = function();   //function carry the return value of obj(ob) and coping in the e object similar the way we copy  the object .
	cout<<e.get()<<endl;
}
