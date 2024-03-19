#include <iostream>
#include <math.h>
using namespace std; 
bool kt_np(int a)
{

    int b ;
    while (a > 0)
    {
        b=a%10;
       	if(b!=0&&b!=1)
       	{
		    return false;
       		break;	
       		
		}
		else
        {a /= 10;}
    }
    return true;
}
void chuyendoi(int a)
{
	int k=a;
    int p = 0;
    int b = 0;
    while (a > 0)
    {
        b += (a % 10) * pow(2, p);
       	p++;
        a /= 10;
    }
    cout<<"\n\n\tSo nhi phan "<<k<<" sau khi chuyen thanh so thap phan la : "<<b;
}
int main()
{
    int a;
    do
	{
    cout<<"\tNhap vao so nhi phan :";
    cin>>a;
    if(kt_np(a)==false)
    {
    	cout<<"\n\n\tDay khong phai so nhi phan.Vui long nhap lai!\n\n";
	}
	}while(kt_np(a)==false);
	chuyendoi(a);
}
