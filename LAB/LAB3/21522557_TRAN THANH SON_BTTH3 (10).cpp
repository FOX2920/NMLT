#include<iostream>
using namespace std;
int main() {
	int n;
    float S;
    do {
        cout << "Nhap so nguyen n: ";
        cin >> n;
    } while (n < 0);
    for(int i=1;i<=n;i++)
	{
        S+=1.0/i;
    }
    cout << "\nTong S = 0+ ... + 1/"<<n<<" la: "<<(float)S;
}
