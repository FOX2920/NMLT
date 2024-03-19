#include<iostream>
#include<math.h>
using namespace std;
struct sophuc
{
	float thuc;
	float ao;
};
void nhapsp(sophuc &sp)
{

	fflush(stdin);
	cout<<"Nhap phan thuc : "; cin>>sp.thuc;
	fflush(stdin);
	cout<<"Nhap phan ao   : "; cin>>sp.ao;
}
void xuatsp(sophuc sp)
{
	if(sp.ao==0)
	{	cout<<sp.thuc;}
	else if(sp.thuc==0)
	{	cout<<sp.ao;}
	else
		{cout<<sp.thuc<<" + "<<sp.ao<<"i";}
}

sophuc tongsp(sophuc a,sophuc b)
{
	sophuc t;
	t.thuc = a.thuc + b.thuc;
	t.ao = a.ao + b.ao;
	return t;
}

sophuc hieusp(sophuc a, sophuc b)
{
	sophuc h;
	h.thuc = a.thuc - b.thuc;
	h.ao = a.ao - b.ao;
	return h;
}

sophuc tichsp(sophuc a, sophuc b)
{
	sophuc m;
	m.thuc = a.thuc*b.thuc - a.ao*b.ao;
	m.ao = a.thuc*b.ao + a.ao*b.thuc;
	return m;
}

sophuc thuongsp(sophuc a,sophuc b)
{
	sophuc d;
	float tongbp;
	tongbp = b.thuc*b.thuc + b.ao*b.ao;
	d.thuc = (a.thuc*a.ao + b.thuc*b.ao)/tongbp;
	d.ao = (a.ao*b.thuc - a.thuc*b.ao)/tongbp;
	return d;
}
double arg(sophuc sp)
{
	return atan(sp.ao/sp.thuc);
}

float modul(sophuc sp)
{
	return sqrt(sp.thuc*sp.thuc + sp.ao*sp.ao);
}
int main()
{
	sophuc x,y;
	
	cout<<"\n==========Nhap so phuc==========\n\n";
	cout<<"Nhap so phuc x : \n";
	nhapsp(x);
	cout<<"Nhap so phuc y : \n";
	nhapsp(y);
	
	cout<<"\n\n==========Xuat phan so==========\n\n";
	cout<<"So phuc x co dang : \t";
	xuatsp(x);
	cout<<"\n\nSo phuc y co dang : \t";
	xuatsp(y);
	
	cout<<"\n\n==========Tong hieu tich thuong giua phan so==========\n\n";
	
	cout<<"Tong giua  hai phan so x va y la : ";xuatsp(tongsp(x,y));
	cout<<"\nHieu giua  hai phan so x va y la : ";xuatsp(hieusp(x,y));
	cout<<"\nTich giua  hai phan so x va y la : ";xuatsp(tichsp(x,y));
	cout<<"\nThuong giua  hai phan so x va y la : ";xuatsp(thuongsp(x,y));
	
	cout<<"\n\n==========Argument va Modul==========\n\n";
	cout<<"Argument cua x la : "<<arg(x);
	cout<<"\nArgument cua y la : "<<arg(y);
	cout<<"\n\nModul cua x la : "<<modul(x);
	cout<<"\nModul cua y la : "<<modul(y);
}
