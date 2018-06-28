#include<iostream>
using namespace std;
//#define n 10;
void Input(int *A)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "A[" << i << "]" << endl;
		cin >> A[i];
	}
}
void Output(int *A)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "A[" << i << "]  =   " << A[i] << endl;
	}
}
void Swap(int A[], int B[])
{
	int temp = *A;
	*A = *B;
	*B = temp;
}
int CheckBigger(int a, int b)
{
	return a>b;
}
int CheckSmaller(int a, int b)
{
	return a<b;
}
void sort(int *A, int(*order) (int, int))
{
	int i, j;
	//void Swap(void*, void*);
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {
			if ((*order)(A[i], A[j]))
			{
				swap(A[i], A[j]);
			}
		}
	}

}