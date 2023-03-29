#include<iostream>
using namespace std;

class A 
{
	public :
		int a=12, b=13;
		
};

A display()
{
	A obj;
	cout<<"A ="<<obj.a<<endl;
	cout<<"B ="<<obj.b<<endl;
	
	return obj;
}

int main()
{
	A obj1;
	obj1 = display();
	return 0;
}
