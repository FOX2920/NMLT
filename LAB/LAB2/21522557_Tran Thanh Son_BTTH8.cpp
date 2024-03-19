#include <iostream>
using namespace std;
int main()
{
	float a,b,c,temp;
	cout<<"nhap a:";
	cin>>a;
	cout<<"nhap b:";
	cin>>b;
	cout<<"nhap c:";
	cin>>c;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	cout<<"so thu tu tang dan:  "<<a<<"->"<<b<<"->"<<c<<"\n";
}
