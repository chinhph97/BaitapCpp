#include<iostream>
using namespace std;
int main()
{
	int x, y;
	int *p, *q;
	x = 2; y = 8;
	p = &x;
	q = &y;
	cout << "Dia chi cua x   " << p << "    gia tri cua x  " << x<<endl;
	cout << "Dia chi cua x   " << &x;
	cout << "gia tri cua p   " << p << "    gia tri cua *P  " << *p<<endl;
	cout << "Dia chi cua y   " << q << "    gia tri cua x  " << y<<endl;
	cout << "Dia chi cua p   "<< &p<<endl;
	cout << "Dia chi cua q   "<< &q<<endl;
	system("pause");
	return 0;

}