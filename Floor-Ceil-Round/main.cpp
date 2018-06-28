#include<iostream>
using namespace std;
void main()
{
	float x;
	cout <<"nhap vao so nguyen can chuyen"<<endl;
	cin >> x;
	cout << ceilf(x ) <<endl;  /*lam tron len*/
	cout << roundf(x ) <<endl; /*lam tron gan nhat*/
	cout << floorf(x ) <<endl; /*lam tron xuong*/
	system("pause");
}