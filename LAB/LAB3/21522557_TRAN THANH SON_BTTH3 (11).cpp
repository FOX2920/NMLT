#include<iostream>
using namespace std;
int main() {
	int n,S;
    do {
        cout << "Nhap so nguyen n: ";
        cin >> n;
    } while (n < 0);
    for(int i=1;i<=n;i++)
	{
        S+=(i*10+3);
    }
    cout << "\nTong S = 0 + ... + "<<n<<"*10+3 la: "<<S;
}
