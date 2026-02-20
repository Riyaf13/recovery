#include<iostream>
using namespace std;
class vehicle
{
	public:
	int tyre;
	string colour;
};
class maruti:public vehicle
{
	/*public:
	 * int tyre;
	 * char colour;
	 */
	public:
	int engine;
};
class maruti_advanced:public maruti
{
	/*public
	 * int tyre;
	 * char colour;
	 * int engine;
	 */
	public:
	int safety;	
};
int main()
{
	maruti_advanced obj;
	obj.tyre=4;
	int r=obj.tyre;
	cout<<"tyre="<<r<<endl;

	obj.colour="red";
	string c=obj.colour;
	cout<<"colour="<<c<<endl;

	obj.engine=5;
	int e=obj.engine;
	cout<<"engine="<<e<<endl;

	obj.safety=4;
	int s=obj.safety;
	cout<<"safety outof(5)="<<s<<endl;
}

