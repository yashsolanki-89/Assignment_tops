#include<iostream>
using namespace std;
template <typename T>
class A
{
	public :
		
    T a,b;
	void input()
	{
		cout<<" Enter A : ";
		cin>>a;
		 
		cout<<" Enter B : ";
		cin>>b;
    }
    void display()
    {
    	cout<<"A = "<<a<<endl;
    	cout<<"B = "<<b;
	}
};
int main()
{
	
	A <int>obj;
	obj.input();
	obj.display();
		return 0;
}
