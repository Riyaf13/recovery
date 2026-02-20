#include<iostream>
using namespace std;
class queue
{
	private:
	int arr[5];
	int front=-1; // initial empty queue (remove)
	int rear=-1;  // initial empty queue (insertion)
	
	public:
	void show()
	{
		if(front==-1 || front>rear)
		{
			cout<<"queue is empty\n"<<endl;
			return ;
		}
		for(int i=front;i<=rear;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	void enqueue(int j)
	{
		if(rear==4)
		{
			cout<<"the queue is full\n"<<endl;
			return ;
		}
		if(front==-1)
		{
			front=0;
		}
		rear++;
		arr[rear]=j;
	}
	void dequeue()
	{
		arr[front];
		front++;
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
