#include<iostream>
using namespace std;
class sample
{
	public :
		
	sample()
	{
		cout<<"constructor"<<endl;
	}
	
	~sample()
	{
		cout<<"destructor"<<endl;
	}
	
	void display(int a,int b)
	{
		cout<<"A = "<<a<<endl;
		cout<<"B = "<<b<<endl;
	}
};
int main()
{
	sample obj;
	 obj.display(12,26);
	 
	 sample obj2;
	 obj2.display(23,34);
	return 0;
}
