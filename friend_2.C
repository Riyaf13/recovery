#include<iostream>
using namespace std ;
class employee
{
	private:
	int amount;
	int empId;
	
	public:
	employee(int value,int salary)
	{
		empId=value;
		amount=salary;
	}
	employee()
	{

	}
	friend void salary(employee e,int rating);
};
void salary(employee e,int rating)
{
	if(rating==5)
	{
		e.amount+=150000;
		cout<<"emp rating:"<<rating<<endl;
		cout<<"\nincremented salary:"<<e.amount<<endl;
	}
	else if(rating==4)
	{
		e.amount+=100000;
		cout<<"emp rating:"<<rating<<endl;
		cout<<"\nincremented salary:"<<e.amount<<endl;
	}
	else if(rating==3)
	{
		e.amount+=50000;
		cout<<"emp rating:"<<rating<<endl;
		cout<<"\nincremented salary:"<<e.amount<<endl;
	}
	else if(rating==2)
	{
		e.amount+=20000;
		cout<<"emp rating:"<<rating<<endl;
		cout<<"\nincremented salary:"<<e.amount<<endl;
	}
	else if(rating==1)
	{
		e.amount+=15000;
		cout<<"emp rating:"<<rating<<endl;
		cout<<"\nincremented salary:"<<e.amount<<endl;
	}
	else
	{
		cout<<"no increment:\n"<<endl;
	}
};
int main()
{
	employee e(1,150);
	employee ob;
	ob = e;
	salary(ob,5);
	cout<<"rating of employee range in between 5-1\n"<<endl;
	salary(e,5);
}
