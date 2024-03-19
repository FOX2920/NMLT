//21522557_TRAN THANH SON_BTTH
#include<iostream>
#include <stdlib.h>
using namespace std;
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
int nhap(int a[],int n)
{  
    for(int i=0;i<n;i++)
   {
   		a[i]=random(1,100);
   		cout<<"So nguyen thu "<<i+1<<" la "<<a[i]<<"\n";
   }
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
int tong( int a[], int n ) {
	int s=0;
   	for(int i = 0; i < n; i++)
	{
		s+=a[i];
	}
    return s;
}
void demX(int a[], int n, int x)
{
	int dem=0;
	for(int i = 0; i < n; i++)
	{
		if((a[i]) == x)
		{
			dem++;
		}
	}
	if (dem ==0)
		cout<<"So "<<x<<" khong xuat hien trong mang";
	else
		cout<<"So "<<x<<" xuat hien "<<dem <<" lan trong mang";
}
void sochan20(int a[], int n)
{
	int k=0;
	for(int i = 0; i < n; i++)
	{
		if((a[i]) <20 && a[i]%2==0)
		{
			k++;
		}
	}
	cout<<"Co tat ca"<<k<<" phan tu la so chan va nho hon 20";
}
void min(int a[], int n){
    int min, p;
    min=a[0];
    p =0;
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            p=i;
        }
    }
    cout<<"\nPhan tu Min la phan tu "<<p+1<<" voi gia tri "<<min;
}
void reverse(int a[],int n){
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    cout<<"Day dao nguoc cua mang la :\n";
    xuat(a,n);
}
int main()
{
   int a[100],n,x;
   cout<<"Nhap so phan tu cua mang: ";
	cin>>n;	
   nhap(a,n);
   cout<<"\n---------Mang co dang--------\n";
   xuat(a,n);
   cout<<"\n\n---------Tong cac phan tu trong mang---------\n";
   cout<<"Tong cua cac phan tu trong mang la : "<<tong(a,n);
   cout<<"\n\n---------So lan xuat hien cua so x trong mang---------\n";
   cout<<"Nhap so x bat ki : ";cin>>x;
   demX(a,n,x);
   cout<<"\n\n---------So chan be hon 20---------\n";
   sochan20(a,n);
   cout<<"\n\n---------Phan tu be nhat trong mang ---------\n";
	min(a,n);
   cout<<"\n\n---------Dao nguoc day so trong mang ---------\n";
   reverse(a,n);
   return 0;
}
