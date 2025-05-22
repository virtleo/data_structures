#pragma once
#pragma once
#include<iostream>
#include<string>
using namespace std;
template <class T>
class stack
{
public:
	typedef struct snode
	{
		T data;
		snode* next;
	}*linkstack;
	void initstack(linkstack& s);
	bool isempty(const linkstack& s);
	void push(linkstack& s, T e);
	void pop(linkstack& s, T& e);
	bool gettop(linkstack& s, T& e);
	void traverse(const linkstack& s);
	void clear(linkstack& s);
	void destroy(linkstack& s);
	int length(const linkstack& s);

	bool isop(T e);
	char cp(T a, T b);
	bool middle_right(const string s, linkstack& L);
	int compute(int a, char ch, int b);
	bool direct_value(const string& s, linkstack& sop);
	T max_value(linkstack& s);
};

template <typename T>
void stack<T>::initstack(linkstack& s)
{
	s = NULL;
}
template <typename T>
bool stack<T>::isempty(const linkstack& s)
{
	return s == NULL;
}

template <typename T>
void stack<T>::push(linkstack& s, T e)
{
	snode* p = new snode;
	p->data = e;
	p->next = s;
	s = p;
}

template <typename T>
void stack<T>::pop(linkstack& s, T& e)
{
	if (isempty(s))
		return;
	snode* p = s;
	s = p->next;
	e = p->data;
	delete p;

}

template <typename T>
bool stack<T>::gettop(linkstack& s, T& e)
{
	if (isempty(s))
		return false;
	e = s->data;
	return true;
}
int i = 1;
template <typename T>
void stack<T>::traverse(const linkstack& s)
{
	if (i == 1)
	{
		cout << "从栈底向栈顶遍历：" << endl;
	}
	snode* p = s;
	if (!isempty(s->next))
	{
		i++;
		traverse(p->next);
	}
	else
	{
		i = 1;
	}
	cout << p->data << " ";

}

template <typename T>
void stack<T>::clear(linkstack& s)
{
	s = NULL;
}

template <typename T>
void stack<T>::destroy(linkstack& s)
{
	delete s;
}
template <typename T>
int stack<T>::length(const linkstack& s)
{
	int i = 1;
	snode* q = s;
	while (!isempty(s->next))
	{

		q = q->next;
		i++;
	}
	delete q;
	return i;
}

template<typename T>
bool stack<T>::isop(T e)
{
	return e == '+' || e == '-' || e == '*' || e == '/' || e == '(' || e == ')' || e == '#';
}

template<typename T>
char stack<T>::cp(T a, T b)
{
	// 优先级表
	char priorityTable[7][7] = {
		//	       +    -    *    /    (    )    #
		/* + */ { '>', '>', '<', '<', '<', '>', '>' },
		/* - */ { '>', '>', '<', '<', '<', '>', '>' },
		/* * */ { '>', '>', '>', '>', '<', '>', '>' },
		/* / */ { '>', '>', '>', '>', '<', '>', '>' },
		/* ( */ { '<', '<', '<', '<', '<', '=', 'N' },
		/* ) */ { '>', '>', '>', '>', 'N', '>', '>' },
		/* # */ { '<', '<', '<', '<', '<', 'N', '=' }
	};

	// 获取操作符索引
	auto getOperatorIndex = [](T op) -> int {
		switch (op) {
		case '+': return 0;
		case '-': return 1;
		case '*': return 2;
		case '/': return 3;
		case '(': return 4;
		case ')': return 5;
		case '#': return 6;
		default: return -1; // 非法字符
		}
		};

	int index1 = getOperatorIndex(a);
	int index2 = getOperatorIndex(b);

	if (index1 == -1 || index2 == -1) {

		return 'N';
	}

	return priorityTable[index1][index2];
}


template <typename T>
bool stack<T>::middle_right(const string s, linkstack& L)
{
	char p, pre;
	int i = 0;
	push(L, '#');
	p = s[i];
	while (!isempty(L))
	{

		gettop(L, pre);
		if (!isop(p) && i < s.length())
		{
			cout << p;
			p = s[++i];
		}
		else if (cp(pre, p) == '<' && i < s.length())
		{
			push(L, p);
			p = s[++i];
		}
		else if (cp(pre, p) == '>')
		{
			pop(L, pre);
			if (pre != '#' && pre != '(' && pre != ')')
			{
				cout << pre;
			}
		}
		else
		{
			pop(L, pre);
			if (pre == '#') {
				if (i < s.length())
					p = s[++i];
				else
					break;
			}
			else if (pre == '(') {
				p = s[++i];
			}
			else
			{
				cout << pre;
			}
		}
	}

	return true;
}

template<class T>
inline int stack<T>::compute(int a, char ch, int b)
{
	switch (ch) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	}
}
template<class T>
inline bool stack<T>::direct_value(const string& s, linkstack& sop)
{

	stack<int> Snum;

	stack<int>::linkstack snum;

	Snum.initstack(snum);
	int a, b, i = 0;
	char pre, p;
	push(sop, '#');
	p = s[i];
	while (!isempty(sop))
	{
		gettop(sop, pre);
		if (!isop(p) && i < s.length())
		{
			Snum.push(snum, p - '0');
			p = s[++i];
		}
		else if (cp(pre, p) == '<' && i < s.length())
		{
			push(sop, p);
			p = s[++i];
		}
		else if (cp(pre, p) == '>')
		{
			Snum.pop(snum, b);
			Snum.pop(snum, a);
			pop(sop, pre);
			if (pre != '#' && pre != '(' && pre != ')')
			{
				Snum.push(snum, compute(a, pre, b));
			}
		}
		else
		{
			pop(sop, pre);
			if (pre == '#') {
				if (i < s.length())
					p = s[++i];
				else
					break;
			}
			else if (pre == '(') {
				p = s[++i];
			}

		}
	}
	Snum.gettop(snum, a);
	cout << a;
	return true;
}

template<class T>
inline T stack<T>::max_value(linkstack& s)
{
	if (s == nullptr) {
		throw std::runtime_error("栈为空");
	}

	if (s->next == nullptr) {
		return s->data;
	}
	else {
		T max_of_rest = max_value(s->next);
		return (s->data > max_of_rest) ? s->data : max_of_rest;
	}
}


