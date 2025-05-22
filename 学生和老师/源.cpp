#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class person
{
protected:
	int bianhao;
	string name;

public:
	person() {
	bianhao = 0;
	name = "";
	}
	person(int bianhao, string name)
	{
		this->bianhao = bianhao;
		this->name = name;
	}
	void show()
	{
		cout << "编号：" << bianhao << " 姓名：" << name << " ";
	}
};
class student : public person
{
protected:
	int score;
	int banhao;
	string subject[2000] = {""};
	static vector<student> stud;
public:
	student() {
		score = 0;
		banhao = 0;
	}
	int show_bianhao()
	{
		return bianhao;
	}
	student(int bianhao, string name, int score, int banhao) : person(bianhao, name)
	{
		this->score = score;
		this->banhao = banhao;
	}
	void show()
	{
		person::show();
		cout << " 班号" << banhao << " 成绩：" << score << endl;
	}
	void add_class_student(student s)
	{
		stud.push_back(s);
	}
	static void shows()
	{
		for (int i = 0; i < stud.size(); i++)
		{
			stud[i].show();
			cout<<"学科："<<stud[i].subject[i] << endl;
		}
	}
	static student add_subject(int   s,string subject)
	{
		int j = 0;
		for (int i = 0; i < stud.size(); i++)
		{
			if (stud[i].bianhao == s)
			{
				stud[i].subject[i] = subject;
				j = i;
				break;
			}
		}
		return stud[j];
	}
};
std::vector<student> student::stud;//声明静态变量
class teacher : public person
{
protected:
	string title;
	string bumeng;
	vector<student>  stude;
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
		for(int i=0;i<stude.size();i++)
		{
			if (stude[i].show_bianhao() != 0)
			{
				cout << "学生信息：";
				stude[i].show();
			}
		}
		
	}
	static void add_student(student &s, vector<teacher>& teach,string subject)
	{
		for (int i = 0; i < teach.size(); i++)

		{
			if (teach[i].bumeng == subject)
			{
				teach[i].stude.push_back (s);
				break;
			}
		}
	}
	static string subject(vector<teacher>& teach, int i)
	{
		return teach[i].bumeng;
	}
};
int main()
{
	teacher t1(1221, "李四", "教授", "数学"),
		t2(1222,"leo","副教授","c++"),
		t3(1223,"jack","副教授","python"),
		t4(1224,"lucy","教授","离散数学"),
		t5(1225,"tome","教授","alogrithm");
	t1.show();
	vector<student> stud;
	vector<teacher> teach;
	teach.push_back(t1);
	teach.push_back(t2);
	teach.push_back(t3);
	teach.push_back(t4);
	teach.push_back(t5); 
	
	while (1)
	{
		int choice;
		cout << "1.添加学生\n2.显示学生\n3.显示老师\n4.选课\n5.退出\n请选择：";
		cin >> choice;

		if (choice == 1)
				{
					int bianhao, score, banhao;
					string name;
					cout << "请输入学生信息：\n编号，姓名，成绩，班号：";
					cin >> bianhao >> name >> score >> banhao;
					student std(bianhao, name, score, banhao);
					std.add_class_student(std);

				}
		if(choice==2)
				{
					student::shows();

				}
		if(choice==3)
				{
					for (int i = 0; i < teach.size(); i++)
					{
						teach[i].show();

					}

				}
		if(choice==4)
				{
					student s;
					string subject;
					int bianhao;
					cout << "请输入学生编号：";
					cin >> bianhao;
					
					cout << "请输入要选的课程：";
					cin >> subject;
					for (int i = 0; i < teach.size(); i++)
					{
						if (teacher::subject(teach, i) == subject)
						{
							s=student::add_subject(bianhao,subject);
							teacher::add_student(s, teach, subject);
							cout << "选课成功！" << endl;
						}
					}
	
				}
		if(choice==5)
				{
					break;
	
				}
		if (choice < 1 || choice > 5)
			{
				cout<<"输入错误！"<<endl;
			}
		
		}
	return 0;
}