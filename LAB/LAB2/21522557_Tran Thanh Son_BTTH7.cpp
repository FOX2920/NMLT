#include <iostream>
using namespace std;
int main()
{
char i;
cout<<"Nhap chu : ";cin>>i;
if((i>= 'a' && i<='z'))
{
	cout<<"Chu hoa tuong ung voi "<<i<<" la "<<char(i-32);
}
else if((i>= 'A' && i<='Z'))
{
	cout<<"Chu thuong tuong ung voi "<<i<<" la "<<char(i+32);
}
else cout<<"Ky tu khong dung yeu cau .";
return 0;
}
