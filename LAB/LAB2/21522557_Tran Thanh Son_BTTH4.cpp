#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "Nhap a : ";
    cin >> a;
    cout << "Nhap b : ";
    cin >> b;
    cout<<a<<"*x + "<<b<<" = 0\n";
    if(a == 0) 
	{
        if (b == 0) 
		{
            cout << "=>Phuong trinh vo so nghiem .";
        } else 
            cout << "=>Phuong trinh vo nghiem .";
    } 
		else 
        cout << "=>Phuong trinh co nghiem la: " << -b/a<<" .";
    return 0;
}
