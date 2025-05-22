/*#include<iostream>
#include<string>
using namespace std;
class name
{
public:
	name() {}
	name(string n) :name(n) {}
	name(const name& p)
	{
		name=p.name;
	}
private:
	string name;
};
int main()
{
	name* a = new name[3];
	a[0]=name("john");
	a[1]=name("mary");
	a[2]=name("tom");
	delete[]a;
	return 0;
}*/
/*1. 点（Point）、线（Line）是图形设计中最核心的元素。请描述和实现二维平面上的CPoint类和Cline类，具体要求如下：
a)  设计一个名为CShape的基类，其中包含有一个虚函数display；
b)  CPoint从CShape继承，封装了二维平面的一个点坐标（x, y），并实现相应的display函数;
c)  Cline也从CShape继承，封装了二维平面中的一个线段，它包含有两个端点CPoint，并实现相应的display函数；
d)  为CPoint和Cline提供相应的构造函数（包括默认、带参数、拷贝构造函数）；
e*) 为CPoint和Cline提供流输出、输入运算符重载；
f*)  在Cline中提供一个函数判定一个点是否在Cline上。
g）在main函数中测试运行时的多态性，测试以上的各种方法。*/
#include<iostream>
using namespace std;
class CShape
{
public:
	virtual void display() = 0;
	virtual ~CShape() {}	
};
class CPoint :public CShape
{
public:
	CPoint()
	{
		x = 0;
		y = 0;
	}
	CPoint(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	CPoint(const CPoint& p)
	{
		x = p.x;
		y = p.y;
	}
	friend CPoint operator-(const CPoint& p1, const CPoint& p2)
	{
		int x = p1.x - p2.x;
		int y = p1.y - p2.y;
		return CPoint(x,y);
	}
	friend bool operator==(const CPoint& p1, const CPoint& p2)
	{
		if (p1.x == p2.x && p1.y == p2.y)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	friend ostream& operator<<(ostream& os, const CPoint& p)
	{
		cout<<"output CPoint"<<endl;
		os << "(" << p.x << " " << p.y << ")";
		return os;
	}
	friend istream& operator>>(istream& is, CPoint& p)
	{
		cout<<"input CPoint"<<endl;
		is>>p.x>>p.y;
		return is;
	}
	// 检查vec2是否是vec1的倍数（即它们是否共线）
	static bool is_parallel(CPoint& vec1, CPoint& vec2)
	{
		if(vec1.x*vec2.y == vec1.y*vec2.x)
			return true;
		else
			return false;
	}
	// 检查点p是否在线段p1p2上（考虑边界情况）  
	static bool is_on_line(CPoint& vec1, CPoint& vec2)
	{
		if(vec2.x >= 0 && vec2.x <= vec1.x && vec2.y >= 0 && vec2.y <= vec1.y)
			return true;
		else
			return false;
	}
	void display()
	{
		cout << "CPoint display" << endl;
		cout << "("<<x << " " << y<< ")" << endl;
	}
protected:
	int x, y;
};
class CLine :public CShape
{
public:
	CLine() {}
	CLine(CPoint p1, CPoint p2)
	{
		this->p1 = p1;
		this->p2 = p2;
	}
	CLine(const CLine& l)
	{
		p1 = l.p1;
		p2 = l.p2;
	}
	friend istream& operator >>(istream& is, CLine& p)
	{
		cout<<"input CLine"<<endl;
		is>>p.p1>>p.p2;
		return is;
	}
	friend ostream& operator <<(ostream& os, const CLine& p)
	{
		cout << "output CLine" << endl;
		os << p.p1 << " " << p.p2;
		return os;
	}
	void display()
	{
		cout << "CLine display" << endl;
		p1.display();
		p2.display();
	}
	bool sentence(CPoint &p)
	{
		CPoint vec1 = p2 - p1; // 向量p1到p2  
		CPoint vec2 = p - p1;  // 向量p1到p  
		// 检查vec2是否是vec1的倍数（即它们是否共线）  
		if (CPoint::is_parallel(vec1, vec2)) {
			// 检查点p是否在线段p1p2上（考虑边界情况）  
			if (CPoint::is_on_line(vec1, vec2)) {
				return true;
			}
		}
		return false;
	}
private:
	CPoint p1, p2;
};
void dianxian(CLine &a, CPoint &p)
{
	if (a.sentence(p))
	{
		cout << "point is on line1" << endl;
	}
	else
	{
		cout << "point is not on line1" << endl;
	}
}
int main()
{
	CShape* shape;
	CPoint point1(1, 2), point2(point1), point3(3, 4),point4(3,5),point5;
	cin >> point5;
	cout << point5 << endl;
	point1.display();
	CLine line1(point1, point3),line2;
	cin >> line2;
	cout << line2 << endl;
	shape= &point1;
	shape->display();
	shape= &line1;
	shape->display();
	dianxian(line1, point2);
	dianxian(line1, point4);
	return 0;
}
