#include "gradation_binary_tree.h"
#include<cstring>


int i = 0;
ElemTypeT Getchar(int i, const ElemTypeT* elem)
{
	return elem[i];
}

void CreateBinTree(BinTree& T, const ElemTypeT* elem, int& i) {
	ElemTypeT ch = elem[i++];
	if (ch != '#') {
		T = new BinTreeNode;
		T->data = ch;
		CreateBinTree(T->lchild, elem, i);
		CreateBinTree(T->rchild, elem, i);
	}
	else {
		T = NULL;
	}
}

void visit(ElemTypeT e)
{
	cout << e;
}

void DestroyTree(BinTree& T)
{
	if (T) {
		DestroyTree(T->lchild);
		DestroyTree(T->rchild);
		delete T;
		T = NULL;
	}
}

void CreateInPost(BinTree& T, const char* in, const char* post, int n)
{
	int k = 0;
	const char* p = in; 
	if (n) {
		T = new BinTreeNode;
		T->data = post[n - 1];
		T->lchild = NULL;
		T->rchild = NULL;
		while (*(p++) != post[n - 1]) {
			k++;
		}
		CreateInPost(T->lchild, in, post, k);
		CreateInPost(T->rchild, in + k + 1, post + k, n - k - 1);
	}
}

bool Init(LinkQueue& L)
{
	L.front = L.rear = NULL;
	return true;
}

bool IsEmpty(LinkQueue L)
{
	return L.front == NULL;
}

bool EnQueue(LinkQueue& L, QElemType e)
{
	QueueNode* s = new QueueNode;
	s->data = e;
	s->next = NULL;

	if (L.front == NULL) {
		L.rear = L.front = s;
	}
	else {
		L.rear->next = s;
		L.rear = s;
	}
	return true;
}

bool DeQueue(LinkQueue& L, QElemType& e)
{
	if (IsEmpty(L)) {
		return false;
	}

	QueueNode* s = L.front;
	e = s->data;
	L.front = L.front->next;
	if (L.front == NULL) {
		L.rear = NULL;
	}
	delete s;
	return true;
}

bool Getfront(LinkQueue L, QElemType& e)
{
	if (IsEmpty(L)) {
		return false;
	}
	e = L.front->data;
	return true;
}

void Traverse(LinkQueue L)
{
	while (!IsEmpty(L)) {
		cout << L.front->data << " ";
		L.front = L.front->next;
	}
}

void Destroy(LinkQueue& L)
{
	while (!IsEmpty(L)) {
		QueueNode* s = L.front;
		L.front = L.front->next;
		delete s;
	}
	if (IsEmpty(L)) {
		cout << "Already Destroy" << endl;
	}
}

void LevelOrder(const BinTree& T) {
	LinkQueue Q;
	Init(Q);
	if (!T) return;
	BinTreeNode* p = T;
	EnQueue(Q, p);
	while (!IsEmpty(Q)) {
		DeQueue(Q, p);
		cout << p->data;
		if (p->lchild) {
			EnQueue(Q, p->lchild);
		}
		if (p->rchild) {
			EnQueue(Q, p->rchild);
		}
	}
}