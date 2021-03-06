#pragma once
#include"People.h"
class Staff : public People
{
protected:
	int IDdepartment;
	Date JoinedDate;
	int Level;
	
public:
	static int getCountStaff();
	virtual void Output();
	virtual void Input();
	int getIDdepartment();
	void setIDdepartment(int);
	Date getJoinedDate();
	void setJoinedDate(Date);
	int getLevel();
	void setLevel(int);
	Staff();
	Staff(char*, Date, int, int, Date, int);
	virtual ~Staff();
	virtual void WtoF(ofstream &f);
	virtual void RfromF(ifstream &f); 
	static int countStaff;
};
