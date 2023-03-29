//Exception handling :
/*
Excception handling in c++ is a process to handle runtime errors.
use to maintain the flow of application even after a runtime error 
*/
#include<iostream>
using namespace std;

int div(int a ,int b)
{
	if(b==0)
{
	throw "INF";
}
	return a/b;
}
int main()
{
	int a ,b;
	
	cout<<"Enter first number :";
	cin>>a;
	
	cout<<"Enter second number :";
	cin>>b;
try
{
cout<<"Divsion :"<<div(a,b);	
}	
catch(const char *e)
{
	cout<<"Error : "<<e;
}
	return 0;
}
