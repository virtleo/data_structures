#pragma once
#include<iostream>
using namespace std;
typedef int  elemtype;
typedef struct bstnode {
	elemtype data;
	bstnode *lchild,*rchild;
}*bst;
typedef struct snode
{
	bstnode* data;
	snode *next;
}*linkstack;
void initstack(linkstack& S);
bool isempty(const linkstack& S);
void push(linkstack& S, bstnode* e);
bstnode* pop (linkstack& S);
bool Find(const bst& T, elemtype x);
void Find(const bst& T, elemtype x, bstnode*& p,bstnode*&father);
void Insert(bst& T, elemtype x);
void CreatBST(bst& T,int n,elemtype *arr);
void Delete(bst& T, elemtype x);
void InorderIter(const bst& T);