#include <iostream>
using namespace std;
int main()
{
	float a,b,c,max;
	cout<<"nhap a:";
	cin>>a;
	cout<<"nhap b:";
	cin>>b;
	cout<<"nhap c:";
	cin>>c;
	max=a;
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	cout<<"so lon nhat trong 3 so "<<a<<","<<b<<","<<c<<" la:  "<<max;
	return 0;
}
