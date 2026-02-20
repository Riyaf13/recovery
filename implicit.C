// this is an example of implicit type conversion which run automatically 

#include<iostream>
using namespace std;
/*int main()
{
	int a=5;
	float f=6.25;
	a=f;  //type conversion a madhe f chi value dakat aahe now compiler automatically carry karte only 6 aani point cha nantar chi value nahi  
	cout<<a;
}*/

// this is an example of explicit type conversion (which is user define)
int main()
{
	int a=5;
	float f;
	f=(float)a+4.5;  //ya madhe user send the datatype we wish for so the value we get in float itself 
	cout<<f;
}
