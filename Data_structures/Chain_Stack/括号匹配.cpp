/*
#include "Chain_Stack.h"
#include<set>
#include<map>
#include<string>
int main()
{
	set<char>strleft = { '(','{','[' };
	set<char>strright = { ')',']','}' };
	map<char, char> kuohao = { {'(',')'} ,{'[',']'} ,{'{','}'} };
	string text;

	linkstack left, right;
	initstack(left);
	initstack(right);
	elemtype ch, zifu;
	int l = 0, r = 0;
	int l1=0,r1=0;
	//string expressions[4] = {
	//   "{[(4+5)*(5-8)+2]-[(9-8)*(5-2)]}",
	//   "{{[(4+5)*(5-8)+2]-[(9-8)*(5-2)]}",
	//   "{[(4+5)*(5-8)+2]-[(9-8))*(5-2)]}",
	//   "}[(4+5)*(5-8)+2]-[(9-8)*(5-2)]}"
	//};
	for (int i = 0; i < 4; i++)
	{
		getline(cin, text);
		for (int i = 0; i < text.size(); i++)
		{
			ch = text[i];
			if (strleft.find(ch) != strleft.end())
			{
				push(left, ch);
				l++;
			}
			else if (strright.find(ch) != strright.end())
			{
				gettop(left, zifu);
				if ((kuohao[zifu] == ch)&&(!isempty(left)))
				{
					pop(left, zifu);
					l1++;
				}
				else
				{
					push(right, ch);
					r1 += r;
				}
				r++;
			}
		}
		int q = 0,p=0;
		if (isempty(left) && (l == r))
			cout << "实现了括号匹配" << endl;
		
		else
		{
			cout << "未实现括号匹配" << endl;
			if ((!isempty(left)) && isempty(right))
			{
				elemtype c;

				while (!isempty(left))
				{
					q++;
					pop(left, c);
					cout << "左括号多出" << q << "个，" << "多出的左括号为:" << c << "，为第" << l -l1  << "个左括号" << endl;
				};
			}
			else if ((!isempty(right)) && isempty(left))
			{
				elemtype c;

				while (!isempty(right))
				{
					p++;
					pop(right, c);
					cout << "右括号多出" << p << "个，" << "多出的右括号为:" << c << "，为第" << r1 << "个右括号" << endl;
				};
			}
			else
			{
				elemtype c;
				while (!isempty(left))
				{
					q++;
					pop(left, c);
					cout << "左括号多出" << q << "个，" << "多出的左括号为:" << c << endl;
				}
				while (!isempty(right))
				{
					p++;
					pop(right, c);
					cout << "右括号多出" << p << "个，" << "多出的右括号为:" << c << endl;
				}
			}
		}
			


		clear(left);
		clear(right);
		l = 0;
		r = 0;
		l1 = 0;
		r1 = 0;
	}
	return 0;
}
*/
