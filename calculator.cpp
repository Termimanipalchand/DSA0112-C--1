#include<iostream>
using namespace std;
int main()
{
	int a,b,r=0;
	cout<<"Enter a & b values : ";
	cin>>a>>b;
	cout<<"1.add"<<endl;
	cout<<"2.sub"<<endl;
	cout<<"3.div"<<endl;
	cout<<"4.mul"<<endl;
	cout<<"5.mod"<<endl;
	char c;
	cout<<"enter ur choice : ";
	cin>>c;
	if(c=='1')
	{
		r=a+b;
		cout<<"add of a & b is :"<<r;
	}
	if(c=='2')
	{
		r=a-b;
		cout<<"sub of a & b is :"<<r;
	}
	if(c=='3')
	{
		r=a/b;
		cout<<"div of a & b is :"<<r;
	}
	if(c=='4')
	{
		r=a*b;
		cout<<"mul of a & b is :"<<r;
    }
    if(c=='5')
	{
		r=a%b;
		cout<<"mod of a & b is :"<<r;
	}
}