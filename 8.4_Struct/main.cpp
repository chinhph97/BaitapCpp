
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
//#pragma warning(disable:4996)
using namespace std;
struct hocsinh
{
	char hoten[20];
	int ID;
	float score;
};

void xuat(hocsinh hs[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "\t--Sinh vien thu" << i << "--\n";
		cout << "\tHo ten Sinh vien:" << hs[i].hoten << endl;
		cout << "\tNhap vao ID cua sinh vien:" << hs[i].ID << endl;
		cout << "\tDiem cua sinh vien:" << (double)hs[i].score << endl;
	}
}

void nhap(hocsinh hs[], int n)
{
	for (int i = 0; i<n; i++)
	{
		float diem;
		cout << "\t--Nhap vao thong tin sinh vien thu " << i << "--\n";
		cout << "\tNhap vao ho ten sinh vien : ";
		fflush(stdin);
		gets_s(hs[i].hoten);
		cout << "\tNhap vao ID cua sinh vien : ";
		cin >> hs[i].ID;
		//Kiem tra dieu kien ID
		for (int j = 0; j < i; j++)
		{
			while (hs[j].ID == hs[i].ID)
			{
				cout << "nhap lai ID khong trung lap cua hoc sinh thu   " << j << endl;
				cin >> hs[i].ID;
			}
		}
		//testid = hs[i].ID;
		cout << "\tNhap vao diem cua sinh vien : ";
		cin >> diem;
		//ham kiem tra dieu kien nhap diem
		if (diem<0 || diem>10)

		{
			while (diem < 0 || diem > 10)
			{
				cout << "Nhap lai diem trong dieu kien hop le";
				cin >> diem;
			}
		}
		else
		{
			diem = hs[i].score;
		}
		
			
	}
}
void Sortscore(hocsinh hs[],int n )
{
	hocsinh temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (hs[i].score > hs[j].score)
			{
				temp = hs[i];
				hs[i] = hs[j];
				hs[j] = temp;
			}
		}
	}
}


void main()
{

	hocsinh hs[10];
	int n;
	cout << "\tNhap vao so luong sinh vien:";
	cin >> n;
	nhap(hs, n);
	//Sortscore(hs,n);
	xuat(hs, n);
	system("pause");
}