#include<iostream>
using namespace std;
class stack
{
	private:
	int arr[5];
	int count=0;
	
	public:
	void show()
	{
		for(int i=0;i<count;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	void push(int j)
	{
		if(count<5){
			arr[count]=j;
			count++;
		}
		else
		{
			cout<<"the stack is full\n"<<endl;
		}
	}
	void pop()
	{
		count--;
	}
};
int main()
{	
	stack obj;
	for(;;)
	{
		cout<<"chooice the options\n"<<endl;
		cout<<"1:push\n"<<endl;
		cout<<"2:pop\n"<<endl;
		cout<<"3:show\n"<<endl;
		cout<<"4:quit\n"<<endl;

		char choice;
		cin>>choice;
		if(choice=='4')
		{
			cout<<"end \n"<<endl;
			return 0;
		}
		switch(choice)
		{
			case'1':
				int num;
				cout<<"enter the element to push:"<<endl;
				cin>>num;
				obj.push(num);
				break;

			case '2':
				obj.pop();
				break;
			case'3':
				cout<<"the stack elements\n"<<endl;
				obj.show();
				break;
			default:
				cout<<"no found\n"<<endl;
		}
	}
}
