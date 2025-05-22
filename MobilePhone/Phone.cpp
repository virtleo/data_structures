#include<iostream>
#include<string>
#include"Phone.h"
using namespace std;
CMobliePhone::CMobliePhone(string n, string m, double a, double b, double c, string use, string numb)
	: phonename(n), phonetype(m), longth(a), width(b), hight(c), user(use), number(numb) {}
void CMobliePhone::setinfo(string n, string m, double a, double b, double c, string use, string numb)
{
	double* p = (double*)&longth;
	double* q = (double*)&width;
	double* g = (double*)&hight;
	phonename = n;
	phonetype = m;
	*p = a;
	*q = b;
	*g = c;
	user = use;
	number = numb;
}
CMobliePhone::CMobliePhone()
{
	phonename = "huawei";
	phonetype = "mate60";
	user = "wu";
	number = "None";

}
void CMobliePhone::showinfo()
{
	cout << phonename << "\n" << phonetype << endl;
}
void CMobliePhone::showsize()
{
	cout << "chang=" << longth << endl << "kuan=" << width << endl << "gao = " << hight << endl;
}
void CMobliePhone::call(string name)
{
	cout << "calling for " << name << endl;
}
void CMobliePhone::showuser()
{
	cout << user << endl;
}
void CMobliePhone::shownumber()
{
	cout << number << endl;
}
Screen::Screen(double i, double r[2], const string t, const string man, const string m)
{
	inch = i;
	resolution_ratio1 = r[0];
	resolution_ratio2 = r[1];
	technological_type = t;
	manufacturer=man;
	match_phone_model = m;
}
void Screen::Parameter()
{
	cout << "尺寸："<<inch << endl
		<< "分辨率：" << resolution_ratio1<<"*"<<resolution_ratio2 << endl
		<< "技术类型:" << technological_type << endl
		<< "生产商：" << manufacturer << endl
		<<"匹配型号："<< match_phone_model<<endl;
}
bool Screen:: checkType(const string& phoneModel)
{
	return match_phone_model == phoneModel;
}
MobilePhone::MobilePhone(Screen ty,string model)
	: type(ty),model(model){}
void MobilePhone::showParameter()
{
	if (type.checkType(model)) {
		type.Parameter();
		cout << model << endl;
	}
	else
		cout << "不匹配" << endl;
}
Person::Person(MobilePhone* mp, string n, int a, bool g):myPhone(mp), name(n), age(a), gender(g){}
Person::Person(MobilePhone*p):myPhone(p){}
string Person:: whoAreYou() 
{
	return "我是" + name + "，今年" + to_string(age) + "岁，" + (gender ? "男性" : "女性");
}
void  Person::callSomeone(string name) 
{
	if (myPhone) 
	{
		cout << name << "，我是" << this->name << "，我正在给你打电话。" << endl;
	}
	else 
	{
		cout << "我很穷没有手机" << endl;
	}
}
string  CMobliePhone::weather = "万里无云";
void CMobliePhone::showWeather() {
	cout << "现在的天气是：" << CMobliePhone::weather << endl;
}

void CMobliePhone::addContact(string c, string n)   
{
	cc.addContact(c, n);
}
void CMobliePhone::showContacts()
{
	cc.showContact();
}
bool CMobliePhone::checkContacts(string c)
{
	if (cc.findContact(c) == -1)
		return false;
	else
		return true;
}