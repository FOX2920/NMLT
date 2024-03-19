#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

struct ToaDo
{
	int x;
	int y;
}td,A,B;

void NhapToaDo(ToaDo &td)
{
	fflush(stdin);
	cout<<"Nhap Hoanh Do: "; cin>>td.x;
	fflush(stdin);
	cout<<"Nhap Tung Do: "; cin>>td.y;
}
void XuatToaDo(ToaDo td)
{
	cout<<"( " <<td.x<<" , "<<td.y<< " )";
}
double KhoangCach(ToaDo td1, ToaDo td2)
{
	double kc;
	kc=sqrt((td2.x- td1.x)*(td2.x- td1.x) + (td2.y- td1.y)*(td2.y- td1.y));
	return kc;
}
void doixung(ToaDo td)
{
	cout<<"Diem doi xung qua goc toa do la : "<<"( " <<-td.x<<" , "<<-td.y<< " )";
	cout<<"\nDiem doi xung qua truc Ox la  : "<<"( " <<td.x<<" , "<<-td.y<< " )";
	cout<<"\nDiem doi xung qua truc Oy la  : "<<"( " <<-td.x<<" , "<<td.y<< " )";
}
void kiemtra(ToaDo td)
{
	if(td.x>0 &&td.y>0)
		cout<<"=>Diem thuoc goc phan tu thu nhat";
	else if(td.x<0 &&td.y>0)
		cout<<"=>Diem thuoc goc phan tu thu hai";
	else if(td.x<0 &&td.y<0)
		cout<<"=>Diem thuoc goc phan tu thu ba";
	else if(td.x>0 &&td.y<0)
		cout<<"=>Diem thuoc goc phan tu thu tu";
	else if(td.x==0 && td.y>0)
		cout<<"=>Diem thuoc Oy nam giua goc phan tu thu nhat va thu hai";
	else if(td.x<0 && td.y==0)
		cout<<"=>Diem thuoc Ox nam giua goc phan tu thu hai va thu ba";
	else if(td.x==0 && td.y<0)
		cout<<"=>Diem thuoc Oy nam giua goc phan tu thu ba va thu tu";
	else if(td.x>0 && td.y==0)
		cout<<"=>Diem thuoc Ox nam giua goc phan tu thu nhat va thu tu";
	else
		cout<<"=>Diem thuoc goc toa do";
}
int main()
{
	double d;
	cout<<"Diem A:\n";
	NhapToaDo(A);
	
	cout<<"\nToa do A la: ";
	XuatToaDo(A);
	
	cout<<"\n\nDiem B: \n";
	NhapToaDo(B);

	cout<<"\nToa do  B la: ";
	XuatToaDo(B);
	d=KhoangCach(A,B);
	cout<<"\n\n-Khoang cach giua diem A va diem B la: "<<d;
    cout<<endl;
    cout<<"\n\n-Diem doi xung qua goc toa do , Ox , Oy :\n\n";
    
    cout<<"Diem A: \n\n";
    doixung(A);
    cout<<"\n\nDiem B: \n\n";
    doixung(B);
    
    cout<<"\n\n-Kiem tra diem thuoc goc phan tu  nao :\n\n";
    
    cout<<"Diem A: \n\n";
    kiemtra(A);
    cout<<"\n\nDiem B: \n\n";
    kiemtra(B);
    
    return 0;
}
