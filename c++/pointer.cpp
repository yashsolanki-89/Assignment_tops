
#include<iostream>
using namespace std;

class parent{
	public :
		virtual void display()
		{
			cout<<"class parent ";
		}
};
class child : public parent
{
	public :
		void display()
		{
			cout<<"class child ";
		}
};
int main()
{
	parent *s;
	parent obj;
	child obj1;
	
	s=&obj;
	s->display();
	
	s=&obj1;
	s->display();
	return 0;
}
