#include <iostream>
using namespace std;
int n;

double Divide(int a, int b) {
	if (b == 0) {
		cout << "Phep chia voi b bang 0" << endl;
	}
	return (a / b);
}

float Average(int count, int offset, float *arr)
{
	if (count == 0)
		cout << "Phep chia voi b bang 0" << endl;
	if ((offset + count) >= n)
		cout << "khong thoa man dieu kien!" << endl;
	float avg = 0;
	for (register int i = offset; i < count; i++) {
		avg += arr[i];
	}
	return (avg / (count - offset));
}

int main()
{
	int a = 5, b = 8;


	system("pause");
}
