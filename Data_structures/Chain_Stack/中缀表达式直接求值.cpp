#include "Chain_Stack_oop.h"
#include <string>
int main()
{
	stack<char> Sop;
	stack<char>::linkstack sop;
	Sop.initstack(sop);
	string s1;
	for (int i = 0; i < 3; i++)
	{
	    cin >> s1;
	    cout << "中缀表达式"<<s1 << "直接求值为：";
		Sop.direct_value(s1+'#', sop);
	    cout << endl;
		Sop.clear(sop);
	}
	return 0;
}