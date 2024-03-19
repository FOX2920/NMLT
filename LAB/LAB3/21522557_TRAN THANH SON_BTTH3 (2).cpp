#include <iostream>
using namespace std;
int main()
{
	int x;
	do
    {
    cout<<"Nhap so nguyen x :";
    cin >> x;
	}while(x<0);
	if(x<2)
		cout<<x<<" khong phai so nguyen to";
	else if(x==2)
		cout<<x<<" la so nguyen to";
	for(int i=2; i<x; i++)
	{
		if(x%i==0)
		{
			cout<<x<<" khong phai so nguyen to";
			break;
		}
		if(x==i+1)
			cout<<x<<" la so nguyen to";
	}
}

