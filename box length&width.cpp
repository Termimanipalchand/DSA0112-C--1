#include<iostream>
using namespace std;
class sun
{
	private:
		int a,b;
		public:
			void getwidth()
			{
				cout<<"enter a & b :";
				cin>>a>>b;
			}
			void display()
			{
				cout<<"Length of box :"<<a<<endl;
			    cout<<"width of box :"<<b<<endl;	
			}
};
int main()
{
	sun ob;
	ob.getwidth();
	ob.display();
	return 0;
}