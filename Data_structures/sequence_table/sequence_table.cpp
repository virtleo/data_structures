#include"sequence_table.h"
bool initlist(sqlist& L)
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
bool initinsert(sqlist& L, int i, elemtype e)
{
	if (i < 1 || i>L.length+1)
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
bool listdelete(sqlist& L, int i)
{
	if (i < 1 || i>L.length)
	{
		return error;
	}
	for (int j = i - 1; j < L.length - 1; j++)
	{
		L.elem[j] = L.elem[j + 1];
	}
	--L.length;
	cout << endl;
	return ok;
}
elemtype getelem(sqlist& L, int i)
{
	return L.elem[i-1];
}
void bianli(sqlist& L)
{
	cout << "bianli:";
	for (int i = 0; i < L.length; i++)
	{
		cout << L.elem[i]<<" ";
	}
	cout << endl;
}
void qingkong(sqlist& L)
{
	L.length = 0;
	if (!L.length)
	{
		cout << "qingkong"<<endl;
	}
}
void xiaohui(sqlist& L)
{
	
	if (L.elem !=NULL)
	{
		delete[]L.elem;
		cout << "xiaohui";
	}
}
int getbianhao(sqlist& L, elemtype e)
{
	for (int j = 0; j < L.length; j++)
	{
		if (L.elem[j] == e)
		{
			return j + 1;
		}
	}
	return 0;
}
