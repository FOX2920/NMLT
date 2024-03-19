#include <iostream>
using namespace std; 
int main()
{
int h,m,s,t;
	cout << "Nhap so gio : ";
	cin >>h;
	cout << "Nhap so phut : ";
	cin >>m;
	cout << "Nhap so giay : ";
	cin >>s;
	t=h*3600+m*60+s;
	cout <<h<<" gio "<<m<<" phut "<<s<<" giay "<<" bang "<<t<<" giay "<<" ." << endl;
return 0;
}
