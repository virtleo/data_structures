#include "Chain_queue.h"

void initqueue(linkqueue& L)
{
	L.front = L.rear = NULL;
}

bool isempty(linkqueue L)
{
	return L.front == NULL;
}

bool getfront(linkqueue& L, elemtype& e)
{
	if (isempty(L))
	{
		return false;
	}
	e = L.front->data;
	return true;
}

bool enqueue(linkqueue& L, elemtype e)
{
	qnode* p = new qnode;
	p->data = e;
	p->next = NULL;
	if (!L.front)
	{
		L.front = L.rear = p;
	}
	else
	{
		L.rear->next = p;
		L.rear = p;
	}
	return true;
}

bool dequeue(linkqueue& L, elemtype& e)
{
	
	if (isempty(L))
	{
		return false;
	}
	else 
	{	
		qnode* s = new qnode;
		e= L.front->data;
		s = L.front;
		L.front = L.front->next;
		delete s;
	}
	return true;
	

}

void traverse(const linkqueue& L)
{
	linkqueue s = L;
	while (!isempty(s))
	{
		cout << s.front->data<<" ";
		s.front = s.front->next;
	}
	cout << endl;
}

void destory(linkqueue& L)
{
	while (L.front) {
		qnode* temp = L.front;
		L.front = L.front->next;
		delete temp;
	}
	L.rear = NULL;
	cout << "Queue destroyed" << endl;
}

void tiaoshi(linkqueue L)
{
	for (int i = 0; i < 4; i++)
	{
		elemtype j = (1 + i);
		enqueue(L, j);
	}
	elemtype ch;
	getfront(L, ch);
	cout << "front:" << ch << endl;
	cout << "traverse:" << endl;
	traverse(L);
	cout << "dequeue:" << endl;
	while (!isempty(L))
	{
		dequeue(L, ch);
		cout << ch << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> ch;
		enqueue(L, ch);
	}
	cout << "travese:" << endl;
	traverse(L);
	destory(L);
}
