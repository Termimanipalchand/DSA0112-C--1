#include<iostream>
using namespace std;
int main()
{
	int i;
	int sum=0;
	cout<<"print numbers 1 to 10 :\n";
	for(i=1;i<=10;i++)
	{
		cout<<"\t"<<i;
		sum=sum+i;
	}
	cout<<" \n sum is : "<<sum;
}
/*#include<iostream>
using namespace std;
int main(){
	int i=1;
	do
	{
		cout<<"\t"<<i;
		i++;
	}while(i<=10);
	cout<<endl;
}*/
