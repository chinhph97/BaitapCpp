#include<iostream>
using namespace std;
void Nhap(int array[])
{
	cout << "Nhap vao mang" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "]=" << endl;
		cin >> array[i];
	}
}
//void Swap(int &a, int &b)
//{	
//	int temp=a;
//	a = b;
//	b = temp;
//}
void BubbleSort(int array[],int vtdau,int vtcuoi)
{
	if (vtdau<vtcuoi)
	{
		for (int i = vtdau; i<vtcuoi; i++)
		{
			for (int j = vtcuoi; j>vtdau; j--)

			{
				if (array[j] < array[j - 1])
					swap(array[j - 1], array[j]);
			}
		}
	}
	else
		cout << "Nhap lai cac chi so";
}
void Xuat(int array[10])
{
	cout << "Mang C co duoc" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " " << array[i];
	}
}

void main()
{
	int A[10];
	Nhap(A);
	BubbleSort(A, 6, 9);
	Xuat(A);
	system("pause");
}
