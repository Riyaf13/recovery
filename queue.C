#include<iostream>
using namespace std;
class queue
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
	void enqueue(int j)
	{
		if(count<5){
			arr[count]=j;
			count++;
		}
		else
		{
			cout<<"the queue is full\n"<<endl;
		}
	}
	void dequeue()
	{
		for(int i=0;i<(count-1);i++)
		{
			arr[i]=arr[i+1];
		}
		count--;
	}
};
int main()
{	
	queue obj;
	for(;;)
	{
		cout<<"chooice the options\n"<<endl;
		cout<<"1:enqueue\n"<<endl;
		cout<<"2:dequeue\n"<<endl;
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
				cout<<"enter the element to enqueue:"<<endl;
				cin>>num;
				obj.enqueue(num);
				break;

			case '2':
				obj.dequeue();
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
