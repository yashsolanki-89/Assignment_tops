#include<iostream>
using namespace std;
class A{
	public :
		int a;
		void display(int p)
		{
			this->a=p;
			cout<<"A ="<<a;
		}
};
int main()
{
	A o;
	o.display(23);
	
	return 0;
}
