#include <iostream>
using namespace std;
int main()
{
  int S,n;
  while(S < 1000)
  {
    n++;
    S = S + n;
  }
  cout<<"\n So nguyen duong nho nhat de S=1 + 2 + 3 + ... + n > 1000 la :"<<n ;
  cout<<"\n Tong S= 1 + 2 + 3 + ... + "<<n<<" la :"<<S ;
  return 0;

}
