#include<iostream>
using namespace std;

class unique
{
	public :
		
		int a , b;
		
		unique(int a1=0,int b1=0)
		{
			a=a1;
			b=b1;
		}
		//logic to overload operator
		unique operator +(unique obj)
		{
			unique temp;
			
			temp.a=a+obj.a;
			temp.b=b+obj.b;
			
			return  temp;
		}
		void display()
		{
			cout<<"Add = ("<<a<<","<<b<<" )";
		}
};
int main()
{
	unique obj1(1,2),obj2(3,4);
	unique obj3=obj1+obj2;
	obj3.display();
}
