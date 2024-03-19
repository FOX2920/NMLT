#include<iostream>
using namespace std;
int main() {
    int n,S=1;
    do {
        cout << "Nhap so nguyen n: ";
        cin >> n;
    } while (n < 0);
    if(n==0)S==1;
    for(int i=1;i<=n;i++)
	{
        S*=i;
    }
    cout << "\nGia thua cua "<<n<<"! la: "<<S;
}
