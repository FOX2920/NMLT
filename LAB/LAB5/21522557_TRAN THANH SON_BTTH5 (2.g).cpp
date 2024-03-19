#include<iostream>
#include <stdlib.h>
using namespace std;
void nhapMang(int a[][10], int n,int m){
	cout<<"\nNhap mang hai chieu: \n";
	for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
        	cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
		}
	}
}
void xuatMang(int a[][10], int n,int m)
{
    for(int i=0; i<n; i++){
    	cout<<"\t";
        for(int j=0; j<m; j++){
                cout<<a[i][j]<<" \t";
        }
        cout<<"\n";
    }
}
void tong(int a[][10],int b[][10],int c[10][10], int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
int main()
{
	    int a[10][10],b[10][10],c[10][10] ,d[10][10];
    int ma, na, mb, nb;
    do
	{
        cout<<"Nhap m cot A: ";
        cin>>ma;
        cout<<"Nhap n dong A: ";
        cin>>na;
        cout<<"Nhap m cot B: ";
        cin>>mb;
        cout<<"Nhap n dong B: ";
        cin>>nb;
        if (na != nb|| ma != mb) 
	{
      cout << "\nHai ma tran khong cung kich co!Vui long nhap lai \n";
    }
    }while((na != nb|| ma != mb));
    cout<<"\nMa tran A: \n";	
	nhapMang(a, na,ma);
	cout<<"\nMa tran B: \n";
	nhapMang(b, na,ma);
	cout<<"\nMa Tran A co dang: "<<endl;
	xuatMang(a, na,ma);
	cout<<"\nMa Tran B co dang: "<<endl;
	xuatMang(b, nb,mb);
	cout<<"\nTong 2 ma tran vuong A va B co dang: "<<endl;
	tong(a,b,c,na,ma);
	xuatMang(c, na,ma);
    return 0;
}
