#include<iostream>
using namespace std;
class sample{
	public :
		string name="hello";
		
		string display()
		{
			return name;
		}
};
class child : public sample{
	
	public :
		string name1="world";
		
		string display()
		{
			return name1;
		}
};

int main()
{
	child obj;
	 cout<<"display :"<<obj.sample::display()<<"  "<<obj.display();
	return 0;
}
