#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int S,n;
	do
    {
    cout<<"Nhap so nguyen x :";
    cin >> n;
	}while(n<0);
	cout<<"\n\tCac so nguyen to be hon "<<n<<" la \t \n";
	for(int i=2; i<n; i++)
	{
		if (i==2)
		{
			cout<<"\t"<<i;
			S+=i;
		}
		for(int j=2; j<i; j++)
		{	
			if(i%j==0)break;
			if(i==j+1)
			{
				cout<<"\t"<<i;
				S+=i;
			}
		}
	}
	cout<<"\n\tTong ac so nguyen to be hon "<<n<<" la : "<<S;
	return 0;
}

