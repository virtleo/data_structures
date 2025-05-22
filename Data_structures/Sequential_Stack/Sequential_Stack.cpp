#include "Sequential_Stack.h"

bool initstack(seqstack& s)
{
	s.elem = new elemtype[maxsize];
	if (!s.elem)
	{
		return false;
	}
	s.top = -1;
	s.size = maxsize;
	return true;
}

bool isfull(const seqstack& s)
{
	return s.top == s.size - 1;
}
bool isempty(const seqstack& s)
{
	return s.top == -1;
}

bool push(seqstack& s, elemtype e)
{
	if (isfull(s))
	{
		return false;
	}
	s.top++;
	s.elem[s.top] = e;
	return true;
}

bool pop(seqstack& s, elemtype& e)
{
	if(s.top==-1)
		return false;
	e = s.elem[s.top];
	s.top--;
	return true;
}

bool gettop(seqstack& s, int &i,elemtype &e)
{
	if(s.top==-1)
		return false;
	i = s.top;
	e = s.elem[i];
	return true;
}

bool traverse(const seqstack& s)
{
	seqstack p = s;
	cout << "Õ»¶¥ÏòÕ»µ×±éÀú£º";
	while (p.top > -1)
	{
		cout << p.elem[p.top] << " ";
		p.top--;
	}
	cout << endl;
	return true;
}

bool clear(seqstack& s)
{
	s.top = -1;
	return true;
}

bool destroy(seqstack& s)
{
	delete []s.elem;
	if (!s.elem)
		return true;
}


