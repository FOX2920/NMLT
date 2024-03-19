#include<iostream>
#include<math.h>
using namespace std;
struct phanso
{
	int tu;
	int mau;
};
void nhapps(phanso &ps)
{
	do
	{
	fflush(stdin);
	cout<<"Nhap tu so : "; cin>>ps.tu;
	fflush(stdin);
	cout<<"Nhap phan so : "; cin>>ps.mau;
	}while(ps.mau==0);
}
void xuatps(phanso ps)
{
	if(ps.mau==1)
		cout<<ps.tu;
	else
		cout<<ps.tu<<" / "<<ps.mau;
}
int UCLN(int a, int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
void rutgon(phanso &ps)
{
	int c=UCLN(ps.tu , ps.mau);
	ps.tu=ps.tu/c;
	ps.mau=ps.mau/c;
}
phanso sosanhps(phanso a,phanso b)
{
	if(a.tu * b.mau >= b.tu * a.mau)
	{
		return a;
	}
	else
	{
		return b;
	}
}
phanso tongps(phanso a,phanso b)
{
	phanso t;
	t.tu = a.tu * b.mau + b.tu * a.mau;
    t.mau=a.mau*b.mau;
	rutgon(t);
	return t;
}
phanso hieups(phanso a,phanso b)
{
	phanso h;
	h.tu = a.tu * b.mau - b.tu * a.mau;
    h.mau = a.mau * b.mau;
	rutgon(h); 
	return h;
}
phanso tichps(phanso a,phanso b)
{
	phanso m;
	m.tu=a.tu * b.tu;
	m.mau = a.mau * b.mau;
	rutgon(m);
	return m;
}
phanso thuongps(phanso a,phanso b)
{
	phanso d;
	d.tu = a.tu * b.mau;
	d.mau = a.mau * b.tu;
	rutgon(d);
	return d;
}
int main()
{
	phanso x,y;
	
	cout<<"\n==========Nhap phan so==========\n\n";
	cout<<"Nhap phan so x : \n";
	nhapps(x);
	cout<<"Nhap phan so y : \n";
	nhapps(y);
	
	cout<<"\n\n==========Xuat phan so==========\n\n";
	cout<<"Phan so x co dang : \t";
	xuatps(x);
	cout<<"\n\nPhan so y co dang : \t";
	xuatps(y);
	
	cout<<"\n\n==========Rut gon phan so==========\n\n";
	cout<<"Phan so x sau khi rut gon : \t";
	rutgon(x);
	xuatps(x);
	cout<<"\n\nPhan so y sau khi rut gon : \t";
	rutgon(y);
	xuatps(y);
	
	cout<<"\n\n==========Tong hieu tich thuong giua phan so==========\n\n";
	
	cout<<"Tong giua  hai phan so x va y la : ";xuatps(tongps(x,y));
	cout<<"\nHieu giua  hai phan so x va y la : ";xuatps(hieups(x,y));
	cout<<"\nTich giua  hai phan so x va y la : ";xuatps(tichps(x,y));
	cout<<"\nThuong giua  hai phan so x va y la : ";xuatps(thuongps(x,y));
	
	cout<<"\n\n==========So sanh phan so==========\n\n";
	cout<<"Phan so lon hon la : ";xuatps(sosanhps(x,y));
}
