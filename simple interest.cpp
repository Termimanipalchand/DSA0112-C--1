#include<iostream>
using namespace std;
int main()
{
	int p,t,i=0;
	char c;
	cout<<"enter the principal:";
	cin>>p;
	cout<<"enter the time:";
	cin>>t;
	cout<<"enter the citizen type(y/n):";
	cin>>c;
	if(p<=0)
	{
		cout<<"\ninvalid"<<endl;
	}
	else
	{
		
		if(c=='y'||c=='Y')
		{
		
			cout<<"interest is "<<(p*t*12)/100;
		}
		else
		{
			cout<<"interest is "<<(p*t*10)/100;
		}
    }
}
