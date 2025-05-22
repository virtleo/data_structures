#include<iostream>
#include<string>
using namespace std;
class Time
{
public:
	Time(int h, int m, int s)
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	void display()
	{
		cout<<"出生证明："<<hours<<"时"<<minutes<<"分"<<seconds<<"秒"<<endl;
	}
protected:
	int hours;
	int minutes;
	int seconds;
};
class Date
{
public:
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void display()
	{
		cout << "出生日期：" << year << "年" << month << "月" << day << "日" << endl;
	}
protected:
	int year;
	int month;
	int day;
};
class Birthtime:public Time,public Date
{
protected:
	string Childname;
public:
	Birthtime(int h, int m, int s, int y, int mth, int d, const string  &name) : Time(h, m, s), Date(y, mth, d)
	{
		Childname = name;
	}
	void display()
	{
		cout << "孩子姓名：" << Childname << endl;
		Date::display();
		Time::display();

	}
};
int main()
{
	Birthtime b(12, 30, 45, 2000, 1, 1, "小明");
	b.display();
	return 0;
}