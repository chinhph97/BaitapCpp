//#include<iostream>
//using namespace std;
//int main()
//{ 
//	char*str = "       HELLO         ";
//	cout << str;
//	char str1[] = { 'H', 'e', 'l', 'l', 'o' ,'\0'};
//	cout << str1;
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;
#define COUNT 10
void Clone(char input[COUNT])
{
	char t;
	for (int i = 0; i < COUNT / 2; i++)
	{
		t = input[i];
		input[i] = input[COUNT - 1 - i];
		input[COUNT - 1 - i] = t;
	}

}
void Nhapchuoi(char input[COUNT])
{
	for (int i = 0; i < COUNT; i++)
	{
		cout << "str["<<i<<"]="<< endl;
		cin >> input[i];
	}
}
void Xuatchuoi(char output[COUNT])
{
	for (int i = 0; i < COUNT; i++)
	{
		cout << output[i]<<endl;
	}
}
void main()
{
	char str[COUNT];
	Nhapchuoi(str);
	Clone(str);
	Xuatchuoi(str);
	system("pause");
}