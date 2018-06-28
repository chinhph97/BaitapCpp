#include <stdio.h>
#include <iostream>
using namespace std;
typedef int *IntPtrType;
int main()
{
	IntPtrType ptr_a, ptr_b, *ptr_c;//Khai bao con tro
	ptr_a = new int;
	*ptr_a = 3;
	ptr_b = ptr_a;
	cout <<"1         "<< ptr_a<<"day la dia chi cua con tro"<<endl;
	cout <<"2         "<< *ptr_a << " " << *ptr_b << "\n";
	ptr_b = new int;//nam o bo nho head
	*ptr_b = 9;
	cout <<"3         "<< *ptr_a << " " << *ptr_b << "\n";
	*ptr_b = *ptr_a;//=3
	cout <<"4         "<< *ptr_a << " " << *ptr_b << "\n";
	delete ptr_a;
	ptr_a = ptr_b;
	cout <<"5         "<< *ptr_a << " " << *&*ptr_b << "\n";//*ptr_a khong co dinh
	ptr_c = &ptr_a;
	cout <<"6         "<< *ptr_c << " " << **ptr_c << "\n";
	delete ptr_a;
	ptr_a = NULL;
	system("pause");
	return 0;
}