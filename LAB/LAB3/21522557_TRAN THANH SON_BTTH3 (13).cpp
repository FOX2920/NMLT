#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    int demchan = 0,demle=0;

    do {
        cout << "Nhap n( n >= 0 ): ";
        cin >> n;
    } while (n < 0);
    while (n != 0) {
        int t = n % 10;
        if (t % 2 == 1)
            demle++;
        else
        	demchan++;
        n /= 10;
    }
    cout << "So luong cac chu so le la: " <<demle<<endl;
    cout << "So luong cac chu so chan la: " <<demchan<<endl;
}
 
