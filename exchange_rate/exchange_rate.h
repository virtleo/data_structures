#pragma once
#include <iostream>
using namespace std;
class Change
{
protected:
	float rmb;
public:
	Change(float price=1):rmb(price){}
	virtual void change()=0;
	~Change(){}
};
class USD :public Change
{
public:
	USD(float price=1):Change(price){}
	void change()
	{
		cout << "USD:" << rmb*0.1378 << endl;
	}
};
class EUR :public Change
{
public:
	EUR(float price=1):Change(price){}
	void change()
	{
		cout << "EUR:" << rmb*0.1287 << endl;
	}
};
class GBP :public Change
{
public:
	GBP(float price=1):Change(price){}
	void change()
	{
		cout << "GBP:" << rmb*0.1088 << endl;
	}
};
class JPY :public Change
{
public:
	JPY(float price=1):Change(price){}
	void change()
	{
		cout << "JPY:" << rmb*21.7566 << endl;
	}
};
class CAD :public Change
{
public:
	CAD(float price=1):Change(price){}
	void change()
	{
		cout << "CAD:" << rmb*0.1895<< endl;
	}

};
class AUD :public Change
{
public:
	AUD(float price=1):Change(price){}
	void change()
	{
		cout << "AUD:" << rmb * 0.209 << endl;
	}
};
class calculate
{
public:
	calculate(float price, Change* q)
	{
		p=price;
		a = q;
	}
	void getmoney()
	{
		a->change();
	}
private:
	float p;
	Change* a;
};