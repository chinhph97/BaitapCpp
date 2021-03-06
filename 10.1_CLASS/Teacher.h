#pragma once
#include"Staff.h"

enum Subject { MATHS, PHYS, ENGLISH };

class Teacher : public Staff
{
private:
	int Class;
	Subject Subject1;
	Subject Subject2;
	
public:
	static int getCountTeacher();
	void Output();
	void Input();
	int getClass();
	void setClass(int);
	int getSubject1() const;
	void setSubject1(Subject);
	int getSubject2() const;
	void setSubject2(Subject);
	Teacher();
	Teacher(char*, Date, int, int, Date, int, int);
	~Teacher();
	void WtoF(ofstream &f);
	void RfromF(ifstream &f);
	static int countTeacher;
};
