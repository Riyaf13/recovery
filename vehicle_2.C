#include<iostream>
#include<cstring>
using namespace std;
class base
{
	protected:
	int breaks;
	int steering_wheel;
	int tyre;
	char colour[4];
	int roof_light;
	int seat_belt;
	int music_system;

	base()
	{
		this->breaks=1;
		this->steering_wheel=1;
		this->tyre=4;
		strcpy(this->colour,"red");
		this->roof_light=1;
		this->seat_belt=4;
		this->music_system=1;   //0- no   1-yes
	}
	~base()
	{
		cout<<"the all data shown\n"<<endl; 
	}
	void show()
	{
		cout<<"breaks="<<breaks<<endl;
		cout<<"steering_wheel="<<steering_wheel<<endl;
		cout<<"tyre="<<tyre<<endl;
		cout<<"colour="<<colour<<endl;
		cout<<"roof light="<<roof_light<<endl;
		cout<<"seat belt="<<seat_belt<<endl;
		cout<<"music system="<<music_system<<endl;
	}
};
class maruti:public base
{
	public:
	int comfortable;
	
	void show_maruti()
	{
		show();
		cout<<"comfortable rating out-off 5="<<comfortable<<endl;
	}
	~maruti()
	{
		cout<<"maruti destructor\n"<<endl;
	}

};
class BMW:public base
{
	public:
	int max_speed;

	void show_BMW()
	{
		show();
		cout<<"maximum speed="<<max_speed<<endl;
	}
	~BMW()
	{
		cout<<"BMW destructor\n"<<endl;
	}
};
int main()
{
	base *b;
	base ob;
	b = &ob;

	maruti *m; // stores address (pointer)
	maruti om; //object
	m=&om;
	om.comfortable=4;
	m->show_maruti();

	cout<<"\n"<<endl;

	BMW *w; // stores address (pointer)
	BMW ow; //object
	w=&ow;

	w->max_speed=500;
	w->show_BMW();
}
