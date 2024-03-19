#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
	cout<<"Chon hinh ban muon tim Chu vi va Dien tich (1[Hinh tron]|2[Hinh Chu Nhat]|3[Hinh Vuong]) : ";cin>>i;
	switch(i)
	{
		case 1:
			float r;
			cout<<"Nhap ban kinh r		  : ";cin>>r;
			cout<<"Chu vi hinh tron la 	  : "<<2*r*M_PI<<" .\n";
			cout<<"Dien tich hinh tron la  : "<<M_PI*r*r<<" .";
			break;
		case 2:
			float a,b;
			cout<<"Nhap chieu dai a  		  : ";cin>>a;
			cout<<"Nhap chieu rong b 		  : ";cin>>b;
			cout<<"Chu vi hinh chu nhat la 	  : "<<2*(a+b)<<" .\n";
			cout<<"Dien tich hinh chu nhat la : "<<a*b<<" .";
			break;
		case 3:
			float k;
			cout<<"Nhap canh k  		   : ";cin>>k;
			cout<<"Chu vi hinh vuong la    : "<<4*k<<" .\n";
			cout<<"Dien tich hinh vuong la : "<<k*k<<" .";
	 	break;
		default:cout<<"hinh ban chon khong hop le.";
	}
	return 0;
}
