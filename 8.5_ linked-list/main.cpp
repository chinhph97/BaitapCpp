#include <cstdio>
#include<iostream>
#include <cstdarg>
using namespace std;
int sum(int num_param, ...)
{
	int sum = 0, val = 0;
	va_list marker;
	va_start(marker, num_param);
	for (register int i = 0; i < num_param; i++)
	{
		val = va_arg(marker, int);
		sum += val;
	}
	va_end(marker);
	return sum;
}
void main()
{
	printf("%d\n", sum(1, 10));
	printf("%d\n", sum(3, 1, 2, 3));
	system("pause");
}