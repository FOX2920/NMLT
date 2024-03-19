#include<iostream>
using namespace std;
int main() 
{
	int n,S;
    do {
        cout << "Nhap so nguyen n: ";
        cin >> n;
    } while (n < 10);
    bool GiamDan = true,TangDan = true;
    int t = n,h=n;
    while(t != 0)
    {
    	int m = t % 10;  
        int k = (t/10) % 10;
        t /= 10;      
		if (k < m)
        {
            GiamDan = false;
            break;
        }

        else 
        {
            m = k;  
        }
    }
    if(GiamDan)
        cout<<n<<" co cac chu so giam dan";
    else
        cout<<n<<" co cac chu so khong giam dan";
    return 0;
}
/*
#include<iostream>
using namespace std;
int main() 
{
	int n,S;
    do {
        cout << "Nhap so nguyen n: ";
        cin >> n;
    } while (n < 10);
    bool GiamDan = true,TangDan = true;
    int t = n,h=n;
    while(t != 0)
    {
    	int m = t % 10;  
        int k = (t/10) % 10;
        t /= 10;      
		if (k > m)
        {
            GiamDan = false;
            break;
        }

        else 
        {
            m = k;  
        }
    }
    if(TangDan)
        cout<<n<<" co cac chu so tang dan";
    else
        cout<<n<<" co cac chu so khong tang dan";
    return 0;
}
*/
