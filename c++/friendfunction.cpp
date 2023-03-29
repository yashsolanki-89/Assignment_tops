#include<iostream>
using namespace std;

class parent{
	int age;
	string name;
	public :
		//declaration of freind function
		friend void display(parent obj);
};
void display(parent obj)
{
	obj.age=23;
	obj.name="yash";
	cout<<obj.age<<endl;
	cout<<obj.name;
}
int main()
{
	parent op;
	display(op);
	return 0;
}
