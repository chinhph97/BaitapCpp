//#include<iostream>
//using namespace std;
//void main()
//{
//	int A[10],B[10],C[20];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "nhap vao cac gí tri cua mang A[]" << endl;
//		cout << "A[" << i + 1 << "]=" << endl;
//		cin >> A[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "nhap vao cac gí tri cua mang B[]" << endl;
//		cout << "B[" << i + 1 << "]=" << endl;
//		cin >> B[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		A[i] = C[i];
//		B[i] = C[i + 10];
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		cout << "Cac gia tri cua C[] la:" << endl;
//		cout << C[i];
//	}
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//void Nhap(int array[]);
//void Chuyen(int a[], int b[], int c[]);
//void Xuat(int numbers[]);
//
//int main()
//{
//	int a[10];
//	int b[10];
//	int c[20];
//
//	Nhap(a);
//
//	Nhap(b);
//
//	Chuyen(a, b, c);
//
//	Xuat(c);
//	system("pause");
//}
//
//void Nhap(int array[])
//{
//	cout << "Nhap vao mang" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "[" << i << "]=" << endl;
//		cin >> array[i];
//	}
//}
//
//void Chuyen(int a[10], int b[10], int c[20])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		c[i] = a[i];
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		c[i + 10] = b[i];
//	}
//
//}
//
//void Xuat(int numbers[20])
//{
//	cout << "Mang C co duoc" << endl;
//	for (int i = 0; i < 20; i++)
//	{
//		cout << " " << numbers[i];
//	}
//}
#include<iostream>
using namespace std;
void Nhap(int array[]);
void Xuat(int array[]);
void main()
{
	int B[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, A[10], C[20];
	Nhap(A);
	Nhap(B);
	memcpy(C,B,sizeof A);
	memcpy(C,A,sizeof C);
	Xuat(C);
	system("pause");

}
void Nhap(int array[])
{

	cout << "Nhap vao mang" << endl;
	for (int i = 0; i < sizeof array; i++)
	{
		cout << "[" << i << "]=" << endl;
		cin >> array[i];
	}
}
void Xuat(int numbers[20])
{
	cout << "Mang C co duoc" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << " " << numbers[i];
	}
}
