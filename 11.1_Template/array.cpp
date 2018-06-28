#include<iostream>
using namespace std;
template <class T,class R>
T average(T t[], R n)
{
	T s = t[n - 1];
	for (int i = 0; i < (n - 1); i++)
		s += t[i];
	return s / n;
}

int main()
{
	double array[20] = { 23.4, 523.5, 55.2, 543.2, 6.4 ,5,6,8,9,10,15};
	double a = average(array, 20);
	cout << "gia tri trung binh cua mang gom cac phan tu la" << a << endl;
	system("pause");
}