#include"D:\BTLT\C++\C++\10.1_CLASS\People.h"
#include"D:\BTLT\C++\C++\10.1_CLASS\Student.h"
#include"D:\BTLT\C++\C++\10.1_CLASS\Staff.h"
#include"D:\BTLT\C++\C++\10.1_CLASS\Teacher.h"
#include <iostream>
#include <list>
using namespace std;
void addList(list<People*>& L)
{
	int k = 1, x;
	do
	{
		cout << "Selection: " << endl << "1 = Staff       2 = Teacher     3 = Student" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
		{
				  Staff * s = new Staff();
				  s->Output();
				  L.push_back(s);
		}
			break;
		case 2:
		{
				  Teacher * t = new Teacher;
				  t->Output();
				  L.push_back(t);
		}
			break;
		case 3:
		{
				  Student * sv = new Student;
				  sv->Output();
				  L.push_back(sv);
		}
			break;
		default:
			cout << "Error!" << endl;
			return;
		}
		cout << "continue? 0: No    1: Yes" << endl << "Your option: ";
		cin >> k;
	} while (k);
}

void printList(list<People*> L)
{
	cout << endl << "Current List: " << endl;
	//travel list
	list<People*>::iterator i = L.begin();
	for (; i != L.end(); i++) {
		(*i)->Output();
		cout << endl;
	}
}

void deleteList(list<People*>& L)
{
	list<People*>::iterator it = L.begin();
	for (; it != L.end(); it++) {
		delete *it;
	}
	cout << "List deleted!" << endl;
}

void modify(list<People*>& L)
{
	int id;
	cout << "Please enter ID of member that you want to modify: ";
	cin >> id;
	for (list<People*>::iterator i = L.begin(); i != L.end(); i++) {
		int x = (*i)->getIDcode();
		if (x == id)
		{
			(*i)->Output();
		}
	}
}