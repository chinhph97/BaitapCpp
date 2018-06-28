#include<iostream>
using namespace std;
int kthuoc = 10;
void Nhap(int array[])
{
	cout << "Nhap vao mang" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "]=" << endl;
		cin >> array[i];
	}
}
void Xuat(int array[])
{
	cout << "Mang A co duoc" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " " << array[i];
	}
}
void Invert(int array[])
{
	int t;
	for (int i = 0; i<10 / 2; i++)
	{
		t = array[i];
		array[i] = array[10 - 1 - i];
		array[10 - 1 - i] = t;
	}
}
void main()
{
	int A[10];
	Nhap(A);
	Invert(A);
	Xuat(A);
	system("pause");
}