#include "binary_search_tree.h"

void initstack(linkstack& S)
{
	S = nullptr;
}
bool isempty(const linkstack& s)
{
	return s == nullptr;
}
void push(linkstack& s, bstnode* e)
{
	snode* p = new snode;
	p->data = e;
	p->next = s;
	s = p;
}
bstnode* pop(linkstack& S)
{
	if(isempty(S))
		cout<<"Stack is empty!"<<endl;
	snode* p = S;
	S=p->next;
	bstnode* e = p->data;
	delete p;
	return e;
}
bool Find(const bst& T, elemtype x)
{
	if (T)
	{
		if (T->data == x)
		{
			return true;
		}
		else if (x < T->data)
		{
			return Find(T->lchild, x);
		}
		else
		{
			return Find(T->rchild, x);
		}
	}
	return false;
}

void Find(const bst& T, elemtype x, bstnode*& p,bstnode*&father)
{
	p = T;
	father = nullptr;
	while (p&& p->data != x)
	{
		father = p;
		if (x < p->data)
			p = p->lchild;
		else
			p = p->rchild;
	}

}

void Insert(bst& T, elemtype x)
{
	bstnode* p = nullptr, * father = nullptr, * s;
	Find(T, x, p, father);
	if (!p)
	{
		s = new bstnode;
		s->data = x;
		s->lchild = s->rchild = nullptr;
		if (!father)
			T = s;
		else if (x < father->data)
			father->lchild = s;
		else
			father->rchild = s;
	}
}
void Delete(bst& T, elemtype x) {
	bstnode* p = nullptr, * father = nullptr, * s;
	// 查找要删除的节点
	Find(T, x, p, father);

	if (p) {
		// 如果要删除的节点没有左子树
		if (!p->lchild) {
			s = p->rchild;
			if (!father) {
				T = s;  // 删除根节点时，更新根节点
			}
			else if (p == father->lchild) {
				father->lchild = s;
			}
			else {
				father->rchild = s;
			}
			delete p;
		}
		// 如果要删除的节点没有右子树
		else if (!p->rchild) {
			s = p->lchild;
			if (!father) {
				T = s;  // 删除根节点时，更新根节点
			}
			else if (p == father->lchild) {
				father->lchild = s;
			}
			else {
				father->rchild = s;
			}
			delete p;
		}
		// 如果要删除的节点有左右子树
		else {
			s = p->rchild;
			// 找到右子树的最左子节点（即后继节点）
			while (s->lchild) {
				s = s->lchild;
			}
			// 替换节点数据
			p->data = s->data;
			// 删除后继节点
			Delete(T, s->data);
		}
	}
}

void InorderIter(const bst& T)
{
	bstnode* p = T;
	linkstack s;
	initstack(s);
	while (!isempty(s) || p)
	{
		if (p)
		{
			push(s, p);
			p = p->lchild;
		}
		else if (!isempty(s))
		{
			p = pop(s);
			cout<<p->data<<" ";
			p = p->rchild;
		}
	}
}

void CreatBST(bst& T, int n, elemtype* arr)
{
	for (int i = 0; i < n; i++)
	{
		Insert(T, arr[i]);
	}
}


