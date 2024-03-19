#include<iostream>
#include <math.h>
using namespace std;
void reverse(int n)
{
   	int s,temp;
   	int x=n;
    while(n > 0)
	{
        temp = n % 10;
        s = s * 10 + temp;
        n = n / 10;
    }
    cout<<"\n\n\tSo nguoc cua "<<x<<" la : "<<s;
}
bool snt(int n)
{
    int i;
    if (n<2) return false;
    for (i=2; i<=sqrt(n); i++)
        if (n%i==0)
            return false;
    return true;
}
void kt_snt(int n)
{
    if(snt(n))
    {
    	cout<<"\n\n\t"<<n<<" la so nguyen to";
	}
	else
		cout<<"\n\n\t"<<n<<" khong phai la so nguyen to";
}
bool chinhphuong(int n)
{
	float i=sqrt(n);
	if(i==(int)i)
	{
		return true;
	}
	else
		return false;
}
void kt_chinhphuong(int n)
{
	if(chinhphuong(n))
	{
		cout<<"\n\n\t"<<n<<" la so chinh phuong";
	}
	else
		cout<<"\n\n\t"<<n<<" khong phai la so chinh phuong";
}
void Tongle(int n)
{
   	int k=0,temp;
   	int s=n;
    while(n != 0)
	{
        temp = n % 10;
        if(temp%2==1)
        {
        	k+=temp;
		}
        n = n / 10;
    }
    cout<<"\n\n\tTong cac chu so le trong "<<s<<" la : "<<k;
}
void Tongnt(int n)
{
    int i,s=0;
    for (i=2; i<n; i++)
        if (snt(i))
            s+=i;
    cout << "\n\n\tTong cac nguyen to nho hon " << n << " la :"<<s;
}
void Tongcp(int n)
{
    int i,c=0;
    for (i=1; i<n; i++)
        if (chinhphuong(i))
            c+=i;
    cout << "\n\n\tTong cac chinh phuong nho hon " << n << " la :"<<c;
}
void Tonguocso(int n)
{
    int i,p=0;
    for (i=1; i<=n; i++)
        if (n%i==0)
            p+=i;
    cout << "\n\n\tTong cac uoc so cua " << n << " la :"<<p;
}
int main()
{
	int n;
	cout<<"\tNhap so nguyen n : ";
	cin>>n;
	reverse(n);
	kt_snt(n);
	kt_chinhphuong(n);
	Tongle(n);
	Tongnt(n);
	Tongcp(n);
	Tonguocso(n);
}
