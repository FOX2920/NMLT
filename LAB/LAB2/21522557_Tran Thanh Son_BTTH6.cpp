#include <iostream>
using namespace std;
int main()
{
int g,p,s;
cout<<"Nhap gio  : ";cin>>g;
cout<<"Nhap phut : ";cin>>p;
cout<<"Nhap giay : ";cin>>s;
if (g<0&&g>23)&&(p<0&&p>59)&&(s<0&&s>59)
cout<<g<<" Gio "<<p<<"Phut "<<s<<"Giay "<<" khong hop le .";
else
cout<<"Gio Phut Giay Da Hop Le : "<<g<<" Gio "<<p<<" Phut "<<s<<" Giay .";
return 0;
}
