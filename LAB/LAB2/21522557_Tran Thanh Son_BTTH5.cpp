#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, delta;
    cout << "Nhap a : ";cin >> a;
    cout << "Nhap b : ";cin >> b;
    cout << "Nhap c : ";cin >> c;
    if(a == 0) 
	{
    	cout<<b<<"*x + "<<c<<" = 0\n";
        if(b == 0) 
		{
            if (c == 0) 
			{
                cout << "=>Phuong trinh vo so nghiem"<<" .";
            } else 
                cout << "=>Phuong trinh vo nghiem"<<" .";
        } 
		else 
            cout << "=>Phuong trinh co nghiem duy nhat: " << -c/b<<" .";
    } 
	else 
	{
    	cout<<a<<"*x^2 + "<<b<<"*x + "<<c<<" = 0 \n";
        delta = b*b - 4*a*c;
        if(delta > 0) 
            cout << "Phuong trinh co 2 nghiem phan  biet :"<<(-b+sqrt(delta))/(2*a)<<" va "<<(-b-sqrt(delta))/(2*a)<<" .";
		else if ( delta == 0) 
            cout << "Phuong trinh co nghiem kep: x = " << -b/2*a<<" .";
        else 
            cout << "Phuong trinh vo nghiem"<<" .";
    }
    return 0;
}
