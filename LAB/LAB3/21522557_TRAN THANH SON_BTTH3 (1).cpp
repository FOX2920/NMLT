#include <iostream>
using namespace std;
int main(){
    int n, t,d;
    do
    {
    cout<<"Nhap so nguyen n :";
    cin >> n;
	}while(n<0);
    int s = 0;
    d=n;
    while(n != 0)
	{
        t = n%10;
        s = s*10 + t;
        n = n / 10;
    }
    cout <<"So nguyen nguoc cua "<<d<<" la : "<< s;
    return 0;
}
