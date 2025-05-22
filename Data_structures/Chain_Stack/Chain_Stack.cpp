#include "Chain_Stack.h"

void initstack(linkstack& s)
{
	s = NULL;
}

bool isempty(const linkstack& s)
{
	return s == NULL;
}

void push(linkstack& s, elemtype e)
{
	snode* p = new snode;
	p->data = e;
	p->next = s;
	s = p;
}

void pop(linkstack& s, elemtype &e)
{
	if (isempty(s))
		return ;
	snode* p = s;
	s = p->next;
	e = p->data;
	delete p;

}

bool gettop( linkstack& s, elemtype& e)
{
	if (isempty(s))
		return false;
	e = s->data;
	return true;
}
int i = 1;
void traverse(const linkstack& s)
{
	if (i == 1)
	{
		cout << "´ÓÕ»µ×ÏòÕ»¶¥±éÀú£º" << endl;
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
	cout << p->data<<" ";
	
}

void clear(linkstack& s)
{
	s = NULL;
}

void destroy(linkstack& s)
{
	delete s;
}
int length(const linkstack& s)
{
	int i=1;
	snode* q =s;
	while (!isempty(s->next))
	{	
		
		q = q->next;
		i++;
	}
	delete q;
	return i;
}
