#include<iostream>
using namespace std;
enum STYPE {
    TA,
    TB,
    TC
};

class AllowanceStrategy {
    // your code
public:
    AllowanceStrategy() {}
    virtual void getAllowance() = 0;
    ~AllowanceStrategy() {}
};

class AllowanceTA :public AllowanceStrategy
{
public:
    // your code
    AllowanceTA(int grade1):grade(grade1) {}
    void getAllowance()
    {
        cout << "TA" <<64*pow(1.2,grade-1)<<endl;
    }
private:
    int grade;
};

class AllowanceTB :public  AllowanceStrategy
{public:
    AllowanceTB(int grade): grade2(grade) {}
    void getAllowance()
    {
        cout << "TB" <<80* pow(1.2,grade2-1)<<endl;
    }
private:
    int grade2;
    // your code
};

class AllowanceTC :public AllowanceStrategy
{
    // your code
public:
    AllowanceTC(int grade):grade3(grade) {}
    void getAllowance()
    {
        cout << "TC" << 96*pow(1.2,grade3-1)<<endl;
    }
private:
    int grade3;
};

class GetAllowance {
    // your code
private:
    AllowanceStrategy* strategy;
public:
    GetAllowance(AllowanceStrategy* s) {
        strategy = s;
    }
    void getAllowance() {
        strategy->getAllowance();
    }
};

int main()
{
    int itp;
    cout << "input student type: TA=0, TB=1, TC=2：" << endl;
    cin >> itp;
    enum STYPE tp = STYPE(itp);

    int grade;
    cout << "input your grade:" << endl;
    cin >> grade;
    AllowanceStrategy *strategy;
    if (tp == TA)
    {
        strategy = new AllowanceTA(grade);
    }
    else if (tp == TB)
    {
        strategy = new AllowanceTB(grade);
    }
    else if (tp == TC)
    {
        strategy = new AllowanceTC(grade);
    }
    GetAllowance* butie = new GetAllowance(strategy);
    butie->getAllowance();
    // your code
    return 0;
}