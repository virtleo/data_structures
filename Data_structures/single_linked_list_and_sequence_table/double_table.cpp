#include "double_table.h"
status init(sqlist& L)
{
	L.elem = new elemtype[Maxsize];
	if (!L.elem)
	{
		exit(error);
	}
	L.length = 0;
	L.maxsize = Maxsize;
	return ok;
}
status initinsert(sqlist& L, int i, elemtype e)
{
	if (i<1 || i>L.length + 1)
	{
		return error;
	}
	if (L.length == Maxsize)
	{
		return error;
	}
	for (int j = L.length - 1; j >= i - 1; j--)
	{
		L.elem[j + 1] = L.elem[j];
	}
	L.elem[i - 1] = e;
	++L.length;
	return ok;
}
elemtype getelem(sqlist& L, int i)
{
	return L.elem[i - 1];
}
status bianli(sqlist& L)
{
	cout << "bianli sequence table:";
	for (int i = 0; i < L.length; i++)
	{
		cout << L.elem[i] << " ";
	}
	cout << endl;
	return ok;
}
status initlist(linklist& L)
{
	L = new lnode;
	L->next = NULL;
	return ok;
}
status traverse(const linklist& L)
{
	lnode* p = L->next;
	cout << "traverse single linked list:";
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
	return ok;
}
status greathead(linklist& L, elemtype n,sqlist&L1)
{
	L = new lnode;
	L->next = NULL;
	for (int i = 0; i < n; i++)
	{
		lnode* p = new lnode;
		p->data=getelem(L1,n-i) ;
		p->next = L->next;
		L->next = p;
	}
	return ok;
}