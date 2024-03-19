#include <iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"Vui long chon  bang cuu chuong tu 1 den 9 : ";cin>>n;
	}
	while(n<=0||n>=10);
    for (int i=1;i<=10;i++)
    {
			if(i<10)
				cout<<" "<<i<<" * "<<n<<" = "<<i*n<<"\n";
			else
				cout<<i<<" * "<<n<<" = "<<i*n<<"\n";		
	}

    return 0;
}
