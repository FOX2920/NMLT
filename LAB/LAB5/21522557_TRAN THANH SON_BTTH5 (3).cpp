#include<iostream>
#include <windows.h>
#include<string.h>
using namespace std;
void ChuHoa(char str[])
{	
	int dem=0;
	for(int i=0; str[i]!='\0'; i++)
	{
		if ((str[i]>='A') && (str[i]<='Z'))
			dem++;
	}
	if (dem ==0)
	{
		cout<<"\n\nKhong co ky tu hoa nao trong chuoi\n";
	}
	else
	{
		cout<<"\n\nCac ky tu viet hoa trong chuoi \n";
		for(int i=0; str[i]!='\0'; i++)
		{
			if ((str[i]>='A') && (str[i]<='Z'))
				cout<<"\t"<<str[i];
		}
	}
}
void reverse_str(char str[]) 
{
	int k,i;
	cout<<"\n\nChuoi dao nguoc : ";
	for(int i = strlen(str)-1; i >= 0;i--){
    	cout << str[i];
	}
	
}
void Chu(char str[])
{
	char s[100];
	strcpy(s,str);
	for(int i=0; s[i]!='\0'; i++)
	{
		if ((i%2==0))
			s[i]=toupper(str[i]);
		else 
			s[i]=tolower(str[i]);
	}
	cout<<"\n\nChuoi co dang o vi tri chan la ky tu viet hoa va o vi tri le la ky tu viet thuong la :\t\n\n\t";
	puts(s);
}
int dem(char str[],char x)
{
	int dem = 0;
		for (int i=0; i<strlen(str); i++)
		{
			if (str[i] == x )
			{
				dem++;
			}
		}
	return dem;
}
void xhnhieunhat(char str[])
{
	int max;
	char k;
	for (int i=0; str[i]!='\0'; i++)
	{
		if (dem(str,str[i]) >max&&str[i]!=' ')
		{
			max=dem(str,str[i]);
			k=str[i];
		}
	}
	cout<<"\n\nKy tu '"<<k<<"' xuat hien nhieu nhat voi so lan la "<<max;
}
void xh1lan(char str[])
{
	int max;
	cout<<"\n\nCac ky tu xuat hien dung 1 lan \n";
	for (int i=0; str[i]!='\0'; i++)
	{
		if (dem(str,str[i]) ==1)
		{
			cout<<"\t"<<str[i];
		}
	}
}
int main()
{
	char str[100];
	cout << "Nhap chuoi: ";
	gets(str);
	cout<<"\n\nChuoi co dang:  ";puts(str);
  		ChuHoa(str);
  	reverse_str(str);
Chu(str);
  	xhnhieunhat(str);
  	xh1lan(str);
  	return 0;
}
