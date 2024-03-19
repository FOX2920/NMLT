#include<iostream>
using namespace std;
void nhap(int *a,int n)
{
	for (int i = 0; i < n; ++i)
    {
        cout << "Phan tu " << i + 1 << ": ";cin >>*(a + i);
    }
}
void tong(int *a,int n)
{
	int s;
	for (int i = 0; i < n; ++i)
    {
        s+=*(a + i);
    }
    cout<<"\nTong cac phan tu trong mang la : "<<s;
}
int SapXep(int *a,int n)
{
    for(int i=0;i<n;i++)
		{
		    for(int j=i+1;j<n;j++)
	            {
	                if(*(a + i)<*(a + j))
	                {
	                    int tem=a[i];
	                    a[i]=a[j];
	                 	a[j]=tem;
	                }        
	            }
	 	}
}
int xuat(int *a,int n)
{
	for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<*(a + i);
    }
}
int main()
{
	int n,*a;
	cout<<"=========NHAP MANG A=========\n\n";
	cout<<"Nhap so so hang n : ";cin>>n;
	a = new int[n];
	nhap(a,n);
	cout<<"\n\n=========TONG DAY SO=========\n\n";
	tong(a,n);
	cout<<"\n\n=========SAP XEP GIAM DAN=========\n\n";
	SapXep(a,n);
	xuat(a,n);
	return 0;
}
