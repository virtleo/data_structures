#include<iostream>
#include<cstring>
using namespace std;
class Contacts {
public:
	Contacts() {
		len = 0;
	}
	void addContact(string n, string p) {
		name[len] = n;
		num[len] = p;
		len++;
	}

	int findContact(string n) {
		for (int i = 0; i < len; i++) {
			if (name[i] == n)
				return i;
		}
		return -1;
	}
	void showContact() {
		for (int i = 0; i < len; i++) {
			cout << name[i] << ":" << num[i] << endl;
		}
	}
private:
	string name[200];
	string num[200];
	int len;
};
class CMobliePhone
{
private:
	string phonename;
	string phonetype;
	string user, number;
	const double longth = 130, width = 50, hight = 9;
	static string weather;
	Contacts cc;
public:
	CMobliePhone(string n, string m, double a, double b, double c, string use, string numb);
	void setinfo(string n, string m, double a, double b, double c, string use, string numb);
	CMobliePhone();
	void showinfo();
	void showsize();
	void call(string name);
	void showuser();
	void shownumber();
	static void setWeather(string w)
	{
		weather = w;
	}
	void showWeather();
	void addContact(string c, string n);
	void showContacts();
	bool checkContacts(string c);
};
class Screen
{
private:
    double inch , resolution_ratio1,resolution_ratio2 ;
	string technological_type, manufacturer;
    string match_phone_model;
public:
	Screen(double i, double r[2],const string t,const string man,const string m);
	void Parameter();
    bool checkType(const string& phoneModel);
};
class MobilePhone
{
private:
	Screen type;
    string model;
	string m_user;
public:
	MobilePhone(Screen ty,string model);
	void showParameter();
	void setUser(string u) {
		m_user = u;
	}

};
class Person
{
private:
	string name;
	int age=0;
	bool gender=true;
	MobilePhone* myPhone;
public:
	Person(MobilePhone* mp, string n, int a, bool g);
	Person(MobilePhone* p);
    string whoAreYou();
    void callSomeone(string name);
	void setPhone(MobilePhone* p)
	{
		if (p != NULL) {
			myPhone = p;
			myPhone->setUser(name);
		}
		else {
			myPhone = NULL;
		}

	}

};

