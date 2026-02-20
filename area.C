#include<iostream>
using namespace std;
class volume;
class area
{
	int length;
	int breath;

	public:

	area()
	{

	}
	area(int length,int breath)
	{
		this->length=length;
		this->breath=breath;
	}
	void show()
	{
		cout<<length<<endl;
		cout<<breath<<endl;
	}
	friend float area_rec(area a);
	friend float vol_rec(area a,volume v);
};
float area_rec(area a)
{
	float res1=a.length*a.breath;
	return res1;
};
class volume:public area    
{
	private:
	int height;

	public:
	volume(int height)
	{
		this->height=height;
	}
	void get()
	{
		cout<<height<<endl;
	}
	friend float vol_rec(area a,volume v);
};
float vol_rec(area a, volume v)
{
	float res=a.length*a.breath*v.height;
        return res;	
};
int main()
{
	area a(5,2);
	volume v(10);
	cout<<"area of rectangle="<<area_rec(a);
	cout<<"\nvolume="<<vol_rec(a,v);
	cout<<"\n"<<endl;
	a.show();
	v.get();
}
