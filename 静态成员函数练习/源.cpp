//使用静态成员函数计算学生平均成绩。

#include <iostream> 

using namespace std;

class Student {                    //定义Student类

public:

    Student(int n, int a, float s) :num(n), age(a), score(s) { }

    void total();

    static float average();//

private:

    int num;

    int age;

    float score;

    static float sum;

    static int count;

};

void Student::total() { sum += score; count++; }

float  Student::average() {

    return sum / count;//

}

float Student::sum = 0;

int Student::count = 0;                     //对静态数据成员初始化

int main() {

    Student stud[3] = {                   //初始化三名学生

        Student(1001,18,70),

        Student(1002,19,78),

        Student(1005,20,98)

    };

    for (int i = 0; i < 3; i++)                  //调用3次total函数

        stud[i].total();

    cout << "the average score is " << Student::average() << endl;

    //调用静态成员函数

    return 0;

}