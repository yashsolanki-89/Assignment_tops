#include<iostream>
using namespace std;

class Address
{
	public :
		string city;
		string state;
		int pin;
		
		Address(string city,string state,int pin)
		{
		this->city=city;
		this->state=state;
		this->pin=pin;	
		}
};
class student
{
	public :
		int id;
		string name;
		Address *address;
		student(int id,string name,Address *address)
		{
			this->id=id;
			this->name=name;
			this->address=address;
		}
		void display()
		{
			cout<<"id = "<<id<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"city = "<<address->city<<endl;
			cout<<"state = "<<address->state<<endl;
			cout<<"pin = "<<address->pin<<endl;
		}
};
int main()
{
	Address A("ahemdabad","gujarat",24234);
	
	student S(12,"abc",&A);
	
	S.display();
	return  0;
}
