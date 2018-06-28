#include<iostream>
using namespace std;
union MyUnion
{
	int iVal;
	float fVal;
	char cVal[5];
};
void main()
{
	MyUnion u;
	u.fVal = 100;
	printf("%d\n%f\n%d\n%d\n", u.iVal, u.fVal, u.cVal[0], sizeof(u));
	system("pause");
} 