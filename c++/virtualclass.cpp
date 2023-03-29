//virtual base class
#include<iostream>
using namespace std;

class A{
	public :
	void displayA()
	{
		cout<<"class A"<<endl;
	}
};
class B: virtual public A{
	public :
	void displayB()
	{
		cout<<"class B"<<endl;
	}
};
class C: virtual public A{
	public :
	void displayC()
	{
		cout<<"class C"<<endl;
	}
};
class D: public B, public C
    {
	public :
	void displayD()
	{
		cout<<"class D"<<endl;
	}
};
int main()
{
	D obj;
	 
	 obj.displayA();
	 obj.displayB();
	 obj.displayC();
	 obj.displayD();
	return 0;
}
