#include<iostream>
#include<string>
#include"Phone.h"
using namespace std;
int main()
{
	//CMobliePhone huawei;
	//string n, m, use, numb;
	//double a, b, c;
	//cin >> n >> m >> a >> b >> c >> use >> numb;
	//huawei.setinfo(n, m, a, b, c, use, numb);
	//huawei.showinfo();
	//huawei.showsize();
	//huawei.call("陈文武");
	//huawei.showuser();
	//huawei.shownumber();
	//CMobliePhone vivo(n, m, a, b, c, use, numb);
	//CMobliePhone* p = new CMobliePhone(n, m, a, b, c, use, numb);
	//cout << typeid(*p).name() << endl;
	//p->showinfo();
	//p->showsize();
	//p->call("mother");
	//p->showuser();
	//p->shownumber();
	//delete p;
	//CMobliePhone oppo;
	//CMobliePhone* q = new CMobliePhone();
	//cout << typeid(*q).name() << endl;
	//q->showinfo();
	//q->showsize();
	//q->call("father");
	//q->showuser();
	//q->shownumber();
	//delete q 
	/*double arr[] = { 2400, 1080 };
	Screen phoneA(6.5,arr,"LTPSLCD","Apple","iPhone13");
	phoneA.Parameter(); 
	MobilePhone phoneAPt(phoneA, "iPhone13");
	Person wangXiaoQiang(&phoneAPt,"王小强", 25, true);
	cout << wangXiaoQiang.whoAreYou() << endl; 
	Person wangShuShu(nullptr,"王叔叔", 50, true);
	cout << wangShuShu.whoAreYou() << endl;
	wangXiaoQiang.callSomeone("王叔叔");
	Person wangXiaoQiang1(nullptr,"王小强", 25, true);
	Person wangShuShu1(&phoneAPt,"王叔叔", 50, true);
	double arr1[] = { 1920,1080 };
	Screen phoneB(6.0,arr1 , "AMOLED", "Samsung", "Galaxy S22");
	MobilePhone phoneBPt(phoneB, "Galaxy S22");
	phoneBPt.showParameter();
	Person wangXiaoQiang2(&phoneBPt, "王小强", 25, true);
	wangXiaoQiang2.callSomeone("王叔叔");
	wangShuShu1.callSomeone("王小强");*/
	CMobliePhone phA;
	//phA.showInfo();
	double arr[] = { 2400, 1080 };
	Screen phoneA(6.5, arr, "LTPSLCD", "Apple", "iPhone13");
	MobilePhone phoneAPt(phoneA, "iPhone13");
	Person wangXiaoQiang(&phoneAPt, "王小强", 25, true);
	Person wangShuShu(nullptr, "王叔叔", 50, true);
	double arr1[] = { 1920,1080 };
	Screen phoneB(6.0, arr1, "AMOLED", "Samsung", "Galaxy S22");
	MobilePhone phoneBPt(phoneB, "Galaxy S22");

	//给 王小强  的手机添加一些人名字
	phA.addContact("李A", "1333333");
	phA.addContact("李B", "1222222");
	phA.addContact("李C", "14444444");
	phA.addContact("李D", "222222");
	phA.addContact("爸爸", "333333");
	phA.showContacts();

	wangXiaoQiang.callSomeone("爸爸");
	wangXiaoQiang.callSomeone("李铁蛋");

	CMobliePhone phB("huawe","i9000", 18.0, 30.0, 10.0,"wangxiqiang","xxxxxx");
	//phB.showInfo();

	wangXiaoQiang.setPhone(&phoneAPt);
	wangXiaoQiang.setPhone(&phoneBPt);

	phA.showWeather();
	phB.showWeather();

	phA.setWeather("多云转晴，气温20度");

	phA.showWeather();
	phB.showWeather();
	return 0;
}

