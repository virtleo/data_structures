#include<iostream>
#include<string>
using namespace std;
class person
{
protected:
	int bianhao;
	string name;
public:
	person(int bianhao, string name)
	{
		this->bianhao = bianhao;
		this->name = name;
	}
	void show()
	{
		cout << "编号：" << bianhao << " 姓名：" << name << endl;
	}
};
class student : public person
{
protected:
	int score;
	int banhao;
public:
	student(int bianhao, string name, int score,int banhao) : person(bianhao, name)
	{
		this->score = score;
		this->banhao=banhao;
	}
	void show()
	{
		person::show();
		cout << " 班号"<<banhao<< " 成绩：" << score << endl;
	}
};
class teacher : public person
{
protected:
	string title;
	string bumeng;
public:	
	teacher(int bianhao, string name, string title, string bumeng) : person(bianhao, name)
	{
		this->title = title;
		this->bumeng = bumeng;
	}
	void show()
	{
		person::show();
		cout << " 职称：" << title << " 部门：" << bumeng << endl;
	}
};
int main()
{
	student s(1001, "张三", 90,10011);
	s.show();
	teacher t(1221, "李四", "教授", "数学");
	t.show();
	return 0;
}