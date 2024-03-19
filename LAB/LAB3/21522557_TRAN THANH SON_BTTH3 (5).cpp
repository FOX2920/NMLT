#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	do
    {
	    cout<<"Nhap so nguyen a :";
	    cin >> a;
	    cout<<"Nhap so nguyen b :";
	    cin >> b;
	}while(a<0||b<0);
	c=a;
	d=b;
	while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

	cout<<"\nUoc chung lon nhat cua 2 so "<<c<<" va "<<d<<" la "<<a;
	cout<<"\nBoi chung lon nhat cua 2 so "<<c<<" va "<<d<<" la "<<(c*d)/a;
	return 0;
}
