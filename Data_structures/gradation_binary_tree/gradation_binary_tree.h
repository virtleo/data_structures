#pragma once
#include<iostream>
using namespace std;

typedef char ElemTypeT;

typedef struct BinTreeNode {
	ElemTypeT data;
	BinTreeNode* lchild, * rchild;
}*BinTree;

void CreateBinTree(BinTree& T, const ElemTypeT* elem, int& i);
ElemTypeT Getchar(int i, const ElemTypeT* elem);
void visit(ElemTypeT e);
void DestroyTree(BinTree& T);
void CreateInPost(BinTree& T, const char* in, const char* post, int n);

typedef BinTreeNode* QElemType;
typedef struct QueueNode {
	QElemType data;
	QueueNode* next;
};
struct LinkQueue {
	QueueNode* front, * rear;
};

bool Init(LinkQueue& L);
bool IsEmpty(LinkQueue L);
bool EnQueue(LinkQueue& L, QElemType e);
bool DeQueue(LinkQueue& L, QElemType& e);
bool Getfront(LinkQueue L, QElemType& e);
void Traverse(LinkQueue L);
void Destroy(LinkQueue& L);
void LevelOrder(const BinTree& T);