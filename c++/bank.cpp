#include<iostream>
using namespace std;
class state{
	public :
		void sbi()
		{
			cout<<"========Welcome to SBI==========="<<endl;
			cout<<"Gujarat"<<endl;
			cout<<"Rajastan"<<endl;
			cout<<"MP"<<endl;
			cout<<"MH"<<endl;
		}
			void gujarat()
	       		{
					cout<<"========Welcome to Gujarat==========="<<endl;
                   	cout<<"Ahmdedabad"<<endl;
 	                cout<<"Baroda"<<endl;
 	                cout<<"Surat"<<endl;
 	                cout<<"Rajkot"<<endl;
		    	}
};

class city{
	public :
		void ahmdedabad()
		{
		
		  cout<<"========Welcome to Ahmdedabad==========="<<endl;
	      cout<<"Are you a registered User :"<<endl;
	      cout<<"1 : yes"<<endl;
	      cout<<"2 : no"<<endl;
      }
};
	
int main()
{
	string s,c;
	
	state obj;
	city obj1;
	
	obj.sbi();
	
	cout<<"Select Your State :";
	cin>>s;
	
	cout<<endl;
	
	if("gujarat"==s)
	{
		obj.gujarat();
	}
	
    cout<<"Select Your City :";
	cin>>c;
	
	cout<<endl;
	
	if("ahmdedabad"==c)
	{
		obj1.ahmdedabad();
	}
	
	return 0;
}
