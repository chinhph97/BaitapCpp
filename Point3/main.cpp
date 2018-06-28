//#include <iostream>
//using namespace std;
//void main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *p = a;
//	printf("0x%x 0x%x 0x%x\n", a, *a, &a);//a chinh la dia chi cua a
//	printf("0x%x 0x%x 0x%x\n", p, *p, &p);//p va dia chi cua p la khac nhau
//	printf("0x%x 0x%x 0x%x 0x%x\n", (a + 1), *(a + 1), *a + 1, &a + 1);
//	printf("0x%x 0x%x 0x%x 0x%x\n", (p + 1), *(p + 1), *p + 1, &p + 1);
//	system("pause");
//
//}
//void main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *p = a;
//	int *p2 = new int;
//	cout << "hello" << endl;
//	delete p;
//	//cout << "gia tri cua a";
//	delete a;
//	//cout <<"2"<< a;
//	delete p2;
//	system("pause");
//}
#include <iostream>
using namespace std;
#define COUNT 10
#define MAX(a, b) ((a) < (b) ? (a):(b))
void main()
{
	int *p = new int[COUNT];
	int a[COUNT];
	for (int i = 0; i < sizeof(a); i++)
	{
		a[i] = i;
	}
	for (int i = 0; i <sizeof(*p); i++)
	{
		p[i] = i;
	}
	for (int i = 0; i < MAX(sizeof(a), sizeof(p)); i++)
	{
		printf("%d %d\n", a[i], p[i]);
	}
	system("pause");
}