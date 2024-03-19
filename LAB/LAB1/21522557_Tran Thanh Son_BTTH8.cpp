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
	cout <<h<<"h"<<m<<"p"<<s<<"s"<<" => "<<t<<"s"<< endl;
return 0;
}
