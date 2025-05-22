#pragma once
#pragma once
#include<iostream>
#include<string>
struct shupian
{
	char ch;
	int bianhao;
};
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
