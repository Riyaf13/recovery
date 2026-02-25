#include <iostream>
using namespace std;
class emp
{

	int i;
	int j;

	public:
	void set_i(int i)
	{ 
		this->i = i;
	}
	int get_i(void) 
	{ 
		return this->i;
	}

}
;

int main()
{
	emp ob1, ob2;
	ob1.set_i(52);

	ob2=ob1;
        cout << ob2.get_i();


}
