#include<iostream>
#include <math.h>
using namespace std;
int tongn(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	return s;
}
int tongn2(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s+=i*10+2;
	}
	return s;
}
float tongps(int n)
{
	float k=0;
	for(int i=1;i<=n;i++)
	{
		k+=1.0/i;
	}
	return k;
}
long tonggiathua(int n)
{
	long t=1,b=0;
	for(int i=1;i<=n;i++)
	{
		t*=i;
		b+=t;
	}
	return b;
}
int tichn(int n)
{
	int t=1,b;
	for(int i=1;i<=n;i++)
	{
		t*=i;
	}
	return t;
}
int main()
{
	int n;
	cout<<"\tNhap so nguyen n : ";
	cin>>n;
	cout<<"\n\n\tTong cua "<<n<<" so tu nhien dau la : "<<tongn(n);
	cout<<"\n\n\tTong S= 0 + 12 + ... + "<<n<<"2 la : "<<tongn2(n);
	cout<<"\n\n\tTong S= 0 + 1.0/1 + ... + 1.0/"<<n<<" la : "<<tongps(n);
	cout<<"\n\n\tTong S= 0 + 1! + ... + "<<n<<"! la : "<<tonggiathua(n);
	cout<<"\n\n\tTich cua "<<n<<" so tu nhien dau la : "<<tichn(n)<<"\n\n";
	return 0;
}
