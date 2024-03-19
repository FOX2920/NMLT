#include <iostream>
using namespace std;
void nhapMang(int a[10][10],int &n ,int &m)
{
	cout<<"Nhap m cot: ";
    cin>>m;
    cout<<"Nhap n dong: ";
    cin>>n;
    cout<<"Nhap mang hai chieu: \n";
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
        	cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void xuatMang(int a[10][10],int n,int m)
{
    for(int i=0; i<n; i++){
    	cout<<"\t";
        for(int j=0; j<m; j++){
                cout<<a[i][j]<<" \t";
        }
        cout<<"\n";
    }
}
int Max(int a[10][10], int n,int m) 
{
    int max = a[0][0];
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
        if(max <a[i][j])
            max = a[i][j];
    return max;        
}
int Min(int a[10][10], int n,int m) {
  	int min = a[0][0];
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
        if(min >a[i][j])
            min = a[i][j];
    return min;        
}
void minHang(int a[10][10], int n, int m)
{
	int i, j;
	int min;
	cout<<"\n\n\tCac so nho nhat cua tung hang tu 1 den "<<n<<":\n";
	for (i = 0; i <n; i++)
	{
		min = a[i][0];
		for (j = 0; j< m; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			}
		}
		cout<<"\n\tHang "<<i+1<<" co gia tri nho nhat la : "<<min;
	}
}

int maxCot(int a[10][10], int n, int m)
{ 
	int max;
    int j=0;
    cout<<"\n\n\tCac so lon nhat cua tung cot tu 1 den "<<m<<": ";
    while( j<m)
	{
	    max=a[0][j];
		for( int i=0; i<n; i++ )
		{
			
			if( a[i][j]>max)
			{
				max=a[i][j];
		    }	
		}
		cout<<"\n\tCot "<<j+1<<" co gia tri lon nhat la : "<<max;
		j++;
	}
}
int main()
{
    int a[10][10] ;
    int n,m;
	nhapMang(a, n,m);
	cout<<"\n\tMa Tran co dang: \n";
	xuatMang(a, n,m);
	cout<<"\n\n\tGia tri lon nhat trong ma tran la "<<	Max(a, n,m);
	cout<<"\n\n\tGia tri nho nhat trong ma tran la "<<	Min(a, n,m);
	cout<<"\n\n\tCac phan tu tren duong cheo chinh la : \n";
	 for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        	if(i==j){
                cout<<" \t"<<a[i][j];
        		}
    	}
    }
	minHang(a,n,m);
	maxCot(a,n,m);
    return 0;
}
