#include<iostream>
#include <stdlib.h>
using namespace std;
void nhap(int a[][50], int *m, int *n) 
{// Nhap thong tin cho ma tran
		cout<<"Nhap so hang : ";
        cin>>*m;
        cout<<"Nhap so cot : ";
        cin>>*n;
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}

void xuat(int a[][50], int m, int n) { // xuat thong tin ma tran tuong ung trong tham so truyen vao
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cout<<a[i][j]<<"\t";
		}
        cout<<endl;
	}
}

void tich(int a[][50], int b[][50], int c[][50], int m, int n, int k) {
	int i, j, l;
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
			{
				c[i][j] = 0;
				for(int l = 0; l < k; l++)
				{
					c[i][j] += a[i][l] * b[l][j];
				}
			}
		}
}

int main() { // start main function
	int a[50][50], b[50][50], c[50][50] = {0};
	int ma, na, mb, nb;
	
	cout<<"Nhap Ma Tran A: \n";
	nhap(a, &ma, &na);
	cout<<"Nhap Ma Tran B: \n";
	nhap(b, &mb, &nb);
	
	if(na = mb) {
		tich(a, b, c, ma, nb, na);
		cout<<"\nMa tran A: \n";
		xuat(a, ma, na);
		cout<<"\nMa tran B: \n";
		xuat(b, mb, nb);
		cout<<"\nMa tran C(=AxB): \n"; // ket qua
		xuat(c, ma, nb);
	}
	else
		cout<<"\nHai ma tran nay khong kha tich!";
	return 0;
}
