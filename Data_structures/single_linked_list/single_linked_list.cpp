#include "single_linked_list.h"

status initlist(linklist& L)
{
	L = new lnode;
	L->next = NULL;
}

elemtype length(const linklist& L)
{
	int j = 0;
	lnode* p = L->next;
	while (p)
	{
		p = p->next;
		j++;
	}
	cout << "单链表的长度:";
	return j;
}

status traverse(const linklist& L)
{
	lnode* p = L->next;
	cout << "遍历：" << endl;
	while (p)
	{
		cout << p->data << endl;
		p = p->next;
	}

}

status greathead(linklist& L, elemtype n)
{
	/*L = new lnode;
	L->next = NULL;*/
	ifstream inputFile("input.txt");
	if (!inputFile)
	{
		cerr << "无法打开输入文件" << endl;
	}
	
	for (int i = 0; i < n; i++)
	{
		lnode* p = new lnode;
		if (!(inputFile >> p->data)) 
		{
			cerr << "读取数据失败或文件内容不足" << endl;
			delete p;  
			inputFile.close();
		}
		p->next = L->next;
		L->next = p;
	}
	inputFile.close();
}

status greatrear(linklist& L, elemtype n)
{
	
	/*L = new lnode;
	L->next = NULL;*/
	lnode* r = L;
	fstream inputFile("input.txt");
	if (!inputFile)
	{
		cerr << "无法打开输入文件" << endl;
	}
	for (int i = 0; i < n; i++)
	{
		lnode* p = new lnode;
		if (!(inputFile >> p->data))
		{
			cerr << "读取数据失败或文件内容不足" << endl;
			delete p;
			inputFile.close();
		}
		p->next = NULL;
		r->next = p;
		r = p;
	}
	inputFile.close();
}

status linkinsert(const linklist& L, int i, elemtype e)
{
	lnode* p = L;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i)
		cout << "无法插入"<<endl;
	lnode* s = new lnode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	
}

status linkdelete(const linklist& L, int i)
{
	lnode* p = L;
	int j = 1;
	while ((p)&& j < i)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i)
	{
		cout << "未删除位置元素:"<<i<<endl;
	}
		
	else
	{
		cout << "删除节点数据：" << p->next->data<<endl;
		lnode* s = new lnode;
		s = p->next;
		p->next = s->next;
		delete s;
	}
		
}

status linklocate(const linklist& L, elemtype e)
{
	lnode* p = L->next;
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
		cout << "没有该元素"<<endl;
	}
	else
		cout << "序号：" << i<<endl;
}
