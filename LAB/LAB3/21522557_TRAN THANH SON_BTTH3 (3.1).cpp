#include <iostream>
using namespace std;
int main()
{
    for (int i=1;i<=10;i++)
    {
		for(int j=1;j<=5;j++)
		{
			if(i<10)
				cout<<" "<<i<<" * "<<j<<" = "<<i*j<<"\t";
			else
				cout<<i<<" * "<<j<<" = "<<i*j<<"\t";
				
		}
		cout<<"\n";
	}cout<<"\n";
	for (int i=1;i<=10;i++)
    {
		for(int j=6;j<=10;j++)
		{
			if(i<10)
				cout<<" "<<i<<" * "<<j<<" = "<<i*j<<"\t";
			else
				cout<<i<<" * "<<j<<" = "<<i*j<<"\t";
		}
		cout<<"\n";
	}
    return 0;
}
