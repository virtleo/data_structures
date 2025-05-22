#pragma once
#include<iostream>
using namespace std;

typedef char ElemType;

typedef struct BinTreeNode {
	ElemType data;
	BinTreeNode* lchild, * rchild;
}*BinTree;


void CreateBinTree(BinTree& T, const ElemType* elem, int& i);
ElemType Getchar(int i, const ElemType* elem);
void visit(ElemType e);
void Pre_Traverse(BinTree T);
void In_Traverse(BinTree T);
void Post_Traverse(BinTree T);
void DestroyTree(BinTree& T);
void CreateInPost(BinTree& T, const char* in, const char* post, int n);
