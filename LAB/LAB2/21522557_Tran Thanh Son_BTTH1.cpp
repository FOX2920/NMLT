#include <iostream>
using namespace std;
int main()
{
	float a,b,c,min;
	cout<<"nhap a:";
	cin>>a;
	cout<<"nhap b:";
	cin>>b;
	cout<<"nhap c:";
	cin>>c;
	min=a;
	if(min>b)
	{
		min=b;
	}
	if(min>c)
	{
		min=c;
	}
	cout<<"so nho nhat trong 3 so "<<a<<","<<b<<","<<c<<" la:  "<<min;
	return 0;
}
