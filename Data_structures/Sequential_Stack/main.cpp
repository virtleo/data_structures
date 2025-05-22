#include "Sequential_Stack.h"
/*int main()
{	
	seqstack a, b, c;
	initstack(a);
	for (int i = 1; i < 6; i++)
	{
		cout << "在栈顶插入元素：" << i << endl;
		push(a, i);
	}
		
	traverse(a);
	elemtype e;
	for (int i = 0; i < 3; i++)
	{
		pop(a, e);
		cout <<"删除的栈顶元素为:" << e << endl;
	}
	traverse(a);
	int i;
	gettop(a, i, e);
	cout << "获取的栈顶节点（起始位为0）为：" << i << "，栈顶元素为：" << e;
	clear(a);
	destroy(a);
	return 0;	
}*/
int main()
{
	seqstack a, b;
	initstack(a);
	initstack(b);
	int a1, b1;
	cout << "输入要转换的数字" << endl;
	cin >> a1>>b1;
	int yuan1 = a1, yuan2 = b1;
	while (a1)
	{
		int a2 = a1 % 2;
		push(a, a2);
		a1 = a1 / 2;
	}
	elemtype e;
	
	cout << yuan1 << "转换为二进制为:" << endl;
	while (!isempty(a))
	{
		pop(a, e);
		cout << e << " ";
	}
	while (b1)
	{
		int b2 = b1 % 8;
		push(b, b2);
		b1 = b1 / 8;
	}
	cout << endl;
	cout << yuan2 << "转换为八进制为:" << endl;
	while (!isempty(b))
	{
		pop(b, e);
		cout << e << " ";
	}
}