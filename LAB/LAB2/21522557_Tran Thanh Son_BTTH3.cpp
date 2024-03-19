#include <iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Nhap i: "; cin>>i;
	cout<<"So "<<i<<" duoc doc la : ";
		switch(i)
		{
			case 1:cout<< " Mot "; break;
            case 2:cout<< " Hai ";break;
            case 3:cout<< " Ba ";break;
            case 4:cout<< " Bon ";break;
            case 5:cout<<" Nam ";break;
            case 6:cout<< " Sau "; break;
            case 7:cout<< " Bay ";break;
            case 8:cout<< " Tam "; break;
            case 9: cout<<" Chin "; break;
            default: cout<<"\n*********Khong doc duoc*********";break;						  
    	}
            return 0;
}
                                
