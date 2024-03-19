#include<iostream>
using namespace std;
int main() {
	int km,pay120,pay2,pay5;
	cout << "Nhap do dai quang duong ban da di : ";          
	cin >> km;
	pay2 = 15000+13500 * (km-1);
	pay5 = 15000 + 13500 * 4 + 11000 * (km - 5);
	pay120 = pay5 * 0.9;
	if (km == 1)
		cout << "ban can phai tra : 15000d" <<endl;
	else if ((km>=2)&&(km<=5))
		cout<<"ban can phai tra : "<<pay2<<"d"<<endl;
	else
	{
		if (km > 120) {
			cout<<"ban can phai tra : "<<pay5<<"d"<<" nhung vi ban da di tren 120km nen ban duoc giam gia xuong con : "<< pay120 <<"d"<<endl;
		}
		else 
			cout<<"ban can phai tra : "<<pay5<<"d" << endl;

	}
	return 0;
}
