#include "binary_tree.h"
#include<cstring>

int i = 0;

ElemType Getchar(int i, const ElemType* elem)
{
	return elem[i];
}

void CreateBinTree(BinTree& T, const ElemType* elem, int& i) {
	ElemType ch = elem[i++];
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

void visit(ElemType e)
{
	cout << e;
}

void Pre_Traverse(BinTree T)
{
	if (T) {
		visit(T->data);
		Pre_Traverse(T->lchild);
		Pre_Traverse(T->rchild);
	}
}

void In_Traverse(BinTree T)
{
	if (T) {
		In_Traverse(T->lchild);
		visit(T->data);
		In_Traverse(T->rchild);
	}
}

void Post_Traverse(BinTree T)
{
	if (T) {
		Post_Traverse(T->lchild);
		Post_Traverse(T->rchild);
		visit(T->data);
	}
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
