#include "no_leading_nodes.h"
status initlist(linklist& L)
{
	L = NULL;
}
status traverse(const linklist& L)
{
	lnode* p = L;
	if (!p)
	{
		cout << "空链表" << endl;
	}
	else
	{
		cout << "遍历" << endl;
			while (p)
			{
				cout << p->data<<endl;
				p = p->next;
			}
	}
	
}
status length(const linklist& L)
{
	lnode* p = L;
	int j = 0;
	while (p)
	{
		p = p->next;
		j++;
	}
	cout << "无头结点的单链表的长度：" <<j<< endl;
}
status getelem(const linklist& L, int i)
{
	lnode* p = L;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i)
	{
		cout << "没有" << i << "号节点"<<endl;
	}
	else
	{
		cout << "序号为" << i << "的元素为：" << p->data<<endl;
	}
}
status greathead(linklist& L, elemtype n)
{
	
	for (int i = 0; i < n; i++)
	{	
		lnode* p = new lnode;
		cin >> p->data;
		p->next = L;
		L = p;
	}
}
status greatrear(linklist& L, elemtype n)
{
	lnode* r = L;
	for (int i = 0; i < n; i++)
	{
		lnode* s = new lnode;
		cin >> s->data;
		if (!L)
		{
			L = r = s;
		}
		else {
			r->next = s;
			r = s;
		}
	}
	r->next = NULL;
}

bool linkinsert( linklist& L, int i, elemtype e)
{
	lnode* p = L,* s;
	int j = 1;
	if (i == 1) 
	{ 
		s = new lnode;
		s->data = e;
		s->next = L; L = s; return true;
	}
	while (p && j < i - 1) 
	{
		p = p->next; j++;
	}
	if (!p || i < 1) 
		return false;
	s = new lnode; 
	s->data = e; 
	s->next = p->next;
	p->next = s; 
	return true;
	
	
}
status linkdelete(linklist& L, int i)
{
	lnode* p = L;
	int j = 1;
	if (i == 1) {
		lnode* q = new lnode;
		q = L; 
		cout << "删除节点数据：" << L->data << endl;
		L = L->next; 
		delete q; 
	}
	else
	{
		while ((p) && j < i-1)
		{
			p = p->next;
			j++;
		}
		if (!p || j > i-1)
		{
			cout << "未删除位置元素:" << i << endl;
		}
		else
		{
			cout << "删除节点数据：" << p->next->data << endl;
			lnode* s = new lnode;
			s = p->next;
			p->next = s->next;
			delete s;
		}
	}
	
	

}
status qingkong(linklist& L)
{
	lnode* p;
	while (L)
	{
		p = L;
		L = L->next;
		delete p;
	}
	L = NULL;
	cout << "已清空" << endl;
}
status xiaohui(linklist& L)
{
	lnode* p;
	while (L)
	{
		p = L;
		L = L->next;
		delete p;
	}
	delete L;
	cout << "已销毁" << endl;
}
status linklocate(const linklist& L, elemtype e)
{
	lnode* p = L;
	int i = 1;
	while (p)
	{
		if (p->data == e)
			break;
		p = p->next;
		i++;
	}

	if (!p)
	{
		cout << "没有该元素" << endl;
	}
	else
		cout << "序号：" << i << endl;
}
