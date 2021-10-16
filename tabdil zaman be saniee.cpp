#include <iostream>
using namespace std;	
int main()
{   int a,h,s,d;
	cout<<"lotfan ye adad bar hasb sanie vared konid:";
	cin>>a;
	h=a/3600;
	d=(a%3600)/60;
	s=a%60;
	cout<<"saat:daghighe:sanie -->"<<h<<":"<<d<<":"<<s;
}
