#include <iostream>
using namespace std;
void CS(int n,int m) 
{
	cout<<"\n\n\tChu vi hinh chu nhat la : "<<2*(n+m);
	cout<<"\n\n\tDien tich hinh chu nhat la : "<<n*m;
}
void vehcn(int n,int m) 
{
	for(int i = 1; i <= n; i++)    {
		cout<<"\t";
        for(int j = 1 ; j <= m; j++){
            if(i == 1 || j == 1 || i == n || j == m)
			{
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
}
int main() 
{
 	int n,m;
	cout<<"\tNhap chieu rong n: ";
	cin>>n;
	cout<<"\tNhap chieu dai m: ";
	cin>>m;
	cout<<"\n\n\tHinh chu nha co dang :\t\n\n";
	vehcn(n,m);
	CS(n,m);
    
}

