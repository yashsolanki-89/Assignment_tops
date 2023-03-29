#include<iostream>
using namespace std;

class sample{
	public :
		
		void display()
		{
			cout<<"Hello"<<endl;
		}
		
		void display(int a)
		{
			cout<<"My Age :"<<a<<endl;
		}
		
		void display(string n1, string n2)
		{
			cout<<"My name :"<<n1<<" "<<n2;
		}
};
int main()
{
	sample obj;
	obj.display();
	obj.display(22);
	obj.display("yash","solanki");
	return 0;
}
