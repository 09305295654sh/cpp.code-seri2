#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sum=0,n;
	string op ;
	while(true)
	{
		cout<<"ada ra vared kon:";
		cin>>n;
		cout<<" makhay bazam adad bedi?";
		cin>>op;
		sum=sum+n;
		if(op=="yes")
		continue;
	//	sum=sum+n;
		else if(op=="exit")
		break;
		
	}
	cout<<"sum is:"<<sum;
}
