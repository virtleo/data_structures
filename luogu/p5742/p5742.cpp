#include<iostream>
#include<string>
using namespace std;
struct student
{
	int id, xueye, suzhi;
	int  score;
};
void print(student stu)
{
	if (stu.score > 799 && stu.suzhi + stu.xueye > 140)
		cout << "Excellent";
	else
		cout << "Not excellent";
}
int main()
{
	
	int n;
	cin>>n;
	student stu[1000];
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].id>>stu[i].xueye>>stu[i].suzhi;
		stu[i].score = 7 * stu[i].xueye + 3 * stu[i].suzhi;
	}
	for (int i = 0; i < n; i++)
	{
		print(stu[i]);
		cout << endl;
	}
}
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
struct node {
	int id;//学号
	double sc1, sc2;//学业成绩和素质拓展成绩
	int score;//学业成绩和素质拓展成绩的和
	double final_score;//综合分数
}a[1000];//结构体定义，由于本人习惯（懒），sc1和sc2定义成了double。
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].id >> a[i].sc1 >> a[i].sc2;
		a[i].score = a[i].sc1 + a[i].sc2;
		a[i].final_score = a[i].sc1 * 0.7 + a[i].sc2 * 0.3;//计算综合分数
	}
	for (int i = 0; i < n; i++) {
		if (a[i].score > 140 && a[i].final_score >= 80) {//一定看清题
			cout << "Excellent" << endl;
		}
		else {
			cout << "Not excellent" << endl;
		}
	}
	return 0;
}