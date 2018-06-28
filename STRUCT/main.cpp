#include<iostream>
#include<time.h>
#include<math.h>

#pragma warning(disable : 4996)
using namespace std;
struct DATE
{
	unsigned char DayofWeek;
	unsigned char Day;
	unsigned char Month;
	unsigned int Year;
};
void main()
{

	DATE tgian;
	time_t now = time(0);
	tm *ltm = localtime(&now);
	//ltm = gmtime(&stime);
	tgian.Year =  (ltm->tm_year+1900);
	tgian.Month =(1 + ltm->tm_mon);
	tgian.Day = (ltm->tm_mday);
	tgian.DayofWeek =  (ltm->tm_wday);
	cout << "Thoi gian hien tai" << (int)tgian.DayofWeek << "," << (int)tgian.Day << "-" << (int)tgian.Month << "-" << (int)tgian.Year << endl;
	cout << sizeof(tgian)<<endl;
	cout << "Thoi gian hien tai" << (int)tgian.Day << "/" << (int)tgian.Month << "/" <<(int)tgian.Year<< endl;
	cout << sizeof(tgian)<<endl;
	cout << "Thoi gian hien tai" << (int)tgian.DayofWeek << "," << (int)tgian.Year <<"," << (int)tgian.Day << "," << (int)tgian.Month << endl;
	cout << sizeof(tgian)<<endl;
	system("pause");


}
