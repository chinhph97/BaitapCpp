#include<iostream>
using namespace std;
extern void Input(int *A);
extern void Output(int *A);
extern int CheckBigger(int a, int b);
extern int CheckSmaller(int a, int b);
extern void sort(int *A, int(*order) (int, int));
void main()
{
	int A[10];
	Input(A);
	sort(A, CheckSmaller);
	Output(A);
	system("pause");
}
