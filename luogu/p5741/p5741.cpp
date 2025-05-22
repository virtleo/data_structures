#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
class student
{
private:
	static vector<student> stud;
	string name;
	int chinese, math, english, score;
public:
	student(string n, int c, int m, int e) : name(n), chinese(c), math(m), english(e)
	{

		score = chinese + math + english;
		stud.push_back(*this);
	}
	static void zuigaozhe()
	{
		string maxname = stud[0].name;
		int maxchinese = 0, maxmath = 0, maxenglish = 0, maxscore = 0;
		for (int i = 0; i < stud.size(); i++)
		{
			if (maxscore < stud[i].score)
			{
				maxname = stud[i].name;
				maxchinese = stud[i].chinese;
				maxmath = stud[i].math;
				maxenglish = stud[i].english;
				maxscore = stud[i].score;
			}
		}
		cout << maxname << " " << maxchinese << " " << maxmath << " " << maxenglish << " " << endl;
	}
	static void xiguxiangdang()
	{
		for (int i = 0; i < stud.size(); i++)
			for (int j = i + 1; j < stud.size(); j++)
			{
				if (abs(stud[i].score - stud[j].score) <= 10 && abs(stud[i].chinese - stud[j].chinese) <= 5 && abs(stud[i].math - stud[j].math) <= 5 && abs(stud[i].english - stud[j].english) <= 5)
				{
					cout<<stud[i].name<<" "<<stud[j].name<<endl;
				}
			}
	}
};
vector<student> student::stud;
int main()
{
	int n;
	cin >> n;
	string name;


	for (int i = 0; i < n; i++)
	{
		int chinese, math, english, score = 0;
		cin >> name >> chinese >> math >> english;
		student(name, chinese, math, english);
	}
	student::xiguxiangdang();
	return 0;
}