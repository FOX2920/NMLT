#include<iostream>
using namespace std;
int main() {
    int n,dem,S=0,k;
    do {
        cout << "Nhap so nguyen n: ";
        cin >> n;
    } while (n < 0);
    k=n;
    while (n != 0) 
	{
        int t = n % 10;
        	S+=t;
            dem++;
        n /= 10;
    }
    cout << "So luong cac chu so cua "<<k<<" la: " << dem;
    cout << "\nTong cac chu so cua "<<k<<" la: "<<S;
}
