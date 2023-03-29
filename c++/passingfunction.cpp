#include<iostream>
using namespace std;
class A 
{
	public :
		int a,b;
		void display(A op)
		{
			cout<<"A = "<<op.a<<endl;
			cout<<"B = "<<op.b;
		}
};
int main()
{
	A obj;
	obj.a=12;
	obj.b=34;
	obj.display(obj);
	return 0;
}
