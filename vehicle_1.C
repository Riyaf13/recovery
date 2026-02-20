#include<iostream>
using namespace std;
class base
{
	public:
	int tyre;
	char colour[5];
};
class maruti:public base
{
	/*public:
	 * int tyre;
	 * string colour;
	 */
	public:
	int engine;
};
class BMW:public base
{
	/*public:
	 * int tyre;
	 * string colour;
	 */
	public:
	int speed;
};
class KV:public base
{
	/*public:
	 * int tyre;
	 * string colour;
	 */
	public:
	int comfort_rating;
};
int main()
{
	maruti obj;
	BMW obj1;
	KV obj2;
	obj1.speed=500;

}
