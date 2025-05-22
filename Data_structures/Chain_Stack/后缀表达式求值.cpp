//#include "Chain_Stack.h"
//#include<set>
//#include<map>
//#include<string>
//int compute(int a, char ch, int b)
//{
//	switch (ch) {
//	case '+':
//		return a + b;
//	case '-':
//		return a - b;
//	case '*':
//		return a * b;
//	case '/':
//		return a / b;
//	}
//}
//int main()
//{
//	set<char>sign = { '/','*','-','+' };
//	char ch;
//	linkstack a,b;
//
//	initstack(a);
//	initstack(b);
//	for (int i = 0; i < 2; i++)
//	{
//		while ((ch = getchar()) != '\n')
//		{
//			if (sign.find(ch) != sign.end())
//			{
//				if ((!isempty(b)))
//				{
//					int fir2,sec2;
//
//					pop(b, sec2);
//					pop(b, fir2);
//
//					push(b, (compute(fir2, ch, sec2)));
//
//				}
//			}
//			else if (ch != ' ')
//			{
//				push(b,ch-'0');
//			}
//		}
//		cout << "中缀表达式为：" << endl;
//
//		traverse(b);
//		clear(b);
//		cout << endl;
//	}
//
//}