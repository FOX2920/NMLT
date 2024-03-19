#include <iostream>
using namespace std;
int tich(int n,int m)
{
    int i=1;
   	if(m==0)
	   return 0;
	return n + tich(n,m-1) ;
}
int main()
{
    int n,m;
    cout<<"\tNhap n : ";
    cin >> n;
    cout<<"\n\n\tNhap m : ";
    cin >> m;
    cout << "\n\n\tTich 2 so " << n <<" va "<<m <<" la: " << tich(n,m);
    return 0;
}
