#include<iostream>
#include <math.h>
using namespace std;
int main() {
    int n,k;
    cout<<"Nhap vao so nguyen duong n: ";
	cin>>n;
    if(n>0)
    {
                k=sqrt(n);
                if((k*k)==n)
                        cout<<n<<" la so chinh phuong .";
                else
						cout<<n<<" khong phai la so chinh phuong .";
    }
    else 
    	cout<<"So"<<n <<" khong hop le";
	return 0;
}
