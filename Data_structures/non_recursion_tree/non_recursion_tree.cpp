#include "non_recursion_tree.h"

bool isnum(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		return true;
	}
	else {
		return false;
	}
}


void creatEPtree(BinTree& T) {
	linkstack L;
	initstack(L);
	BinTreeNode* s = nullptr, * Rn, * Ln;
	char ch;
	ifstream input("input.txt");
	if (!input) {
		cerr << "Error: cannot open input file." << endl;
		return;
	}
	while (input >> ch) {
		s = new BinTreeNode;
		s->data = ch;
		if (isnum(ch)) {
			s->lchild =nullptr;
			s->rchild =nullptr;
		}
		else {
			pop(L, Ln);
			pop(L, Rn);
			s->lchild = Rn;
			s->rchild = Ln;
		}
		push(L, s);
	}
	pop(L, T);
	T = s;
}
void pre_reverse(BinTree T)
{
	if (T)
	{
		cout << T->data << " ";
		pre_reverse(T->lchild);
		pre_reverse(T->rchild);
	}
}

void in_reverse(BinTree T)
{
	if (T)
	{
		in_reverse(T->lchild);
		cout << T->data << " ";
		in_reverse(T->rchild);
	}
}

void preorderiter(const BinTree T)
{
	BinTreeNode* p = T;
	linkstack L;
	initstack(L);
	while (p || !isempty(L))
	{
		if (p)
		{
			cout << p->data << " ";
			if (p->rchild)
			{
				push(L, p->rchild);
				
			}
			p = p->lchild;
		}
		else if (!isempty(L))
		{
			pop(L, p);
		}
	}
}

void inorderiter(const BinTree T)
{
	linkstack S;
	initstack(S);
	BinTreeNode* p = T;
	while (!isempty(S) || p) {
		if (p) {
			push(S, p);
			p = p->lchild;
		}
		else if (!isempty(S)) {
			pop(S, p);
			cout << p->data<< " ";
			p = p->rchild;
		}
	}
}

void postorderiter(const BinTree T)
{
	BinTreeNode* p = T;
	linkstacks L;
	initstack(L);
	selemtype e;
	while (p || !isempty(L))
	{
		if (p)
		{
			e.p = p;
			e.tag = 1;
			push(L, e);
			p = p->lchild;
		}
		else if (!isempty(L))
		{
			pop(L, e);
			if (e.tag == 1)
			{
				e.tag = 2;
				p=e.p->rchild;
				push(L, e);
			}
			else
			{
				cout << e.p->data << " ";
			}
		}
	}
}


bool isempty(linkstack s)
{
	return s == NULL;
}

void initstack(linkstack& s)
{
	s = NULL;
}
void push(linkstack& s, BinTree e)
{
	snode* p = new snode;
	p->data = e;
	p->next = s;
	s = p;
}

void pop(linkstack& s, BinTree& e)
{
	if (s == NULL)
	{
		return ;
	}
	snode* p = s;
	e = p->data;
	s = p->next;
	delete p;
}

bool isempty(linkstacks s)
{
	return s == NULL;
}

void initstack(linkstacks& s)
{
	s = NULL;
}

void push(linkstacks& s, selemtype e)
{
	ssnode* p = new ssnode;
	p->data = e;
	p->next = s;
	s = p;
}

void pop(linkstacks& s, selemtype& e)
{
	if (s == NULL)
	{
		return;
	}
	ssnode* p = s;
	e = p->data;
	s = p->next;
	delete p;
}

