  #include "Circular_queue.h"

bool initqueue(seqqueue& L)
{
	L.elem = new elemtype[maxsize];
	if (!L.elem)
	{
		cerr << "error";
	}
	L.front = L.rear = 0;
	return true;
}

bool isempty(seqqueue& L)
{
	return L.front == L.rear;
}

bool isfull(seqqueue L)
{
	return (L.rear + 1) % maxsize == (L.front);
}

bool enqueue(seqqueue& L, elemtype& e)
{
	if (isfull(L))
	{
		return false;
	}
	L.elem[L.rear] = e;
	L.rear = (L.rear + 1) % maxsize;
	return true;
}

bool dequeue(seqqueue& L, elemtype& e)
{
	if (isempty(L))

	{
		return false;
	}
	e = L.elem[L.front];
	L.front = (L.front + 1) % maxsize;
	return true;
}

bool getfront( seqqueue& L, elemtype& e)
{
	if (isempty(L))
	{
		return false;
	}
	e = L.elem[L.front];
	return true;
}

//void traverse(const seqqueue& L)
//{
//	seqqueue p = L;
//	while (!isempty(p))
//	{
//		cout << p.elem[p.front];
//		p.front=(p.front+1)%maxsize;
//	}
//}

void destory(seqqueue& L)
{
	if (L.elem != NULL)
	{
		delete[]L.elem;
		cout << "already destory" << endl;
	}
}

//void tiaoshi(seqqueue L)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		elemtype j = ('a' + i);
//		enqueue(L, j);
//	}
//	elemtype ch;
//	getfront(L, ch);
//	cout << "front:" << ch << endl;
//	cout << "traverse:" << endl;
//	traverse(L);
//	cout << "dequeue:" << endl;
//	while (!isempty(L))
//	{
//		dequeue(L, ch);
//		cout << ch << " ";
//	}
//	cout << endl;
//	while (!isfull(L))
//	{
//		cin >> ch;
//		enqueue(L, ch);
//	}
//	cout << "travese:" << endl;
//	traverse(L);
//	cout << endl;
//	if (isfull(L))
//		cout << "is full" << endl;
//	destory(L);
//}

