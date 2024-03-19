#include <iostream>
#include <math.h>
using namespace std;
int n, dem;
int main()
{
    	do
    {
    cout<<"Nhap so nguyen n :";
    cin >> n;
	}while(n<0||n>50);
    for (int i = n; i >= 2; i--)
    {
        dem = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                dem = dem + 1;
            }
        }
        if (dem == 0)
        {
            cout << "So nguyen to lon nhat nho hon " << n << " la " << i;
            break;
        }
    }
    return 0;
}
