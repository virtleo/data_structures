#pragma once
#include<iostream>
#include<fstream>
using namespace std;

typedef struct BinTreeNode{
	char data;
	BinTreeNode *lchild,*rchild;
}*BinTree;
bool isnum(char ch);
void creatEPtree(BinTree& T);
void pre_reverse(BinTree T);
void in_reverse(BinTree T);
void preorderiter(const BinTree T);
void inorderiter(const BinTree T);
struct selemtype {
	BinTreeNode* p;
	int tag;
};
void postorderiter(const BinTree T);
typedef struct snode {
	BinTree data;
	snode* next;
}*linkstack;
bool isempty(linkstack s);
void initstack(linkstack& s);
void push(linkstack& s, BinTree e);
void pop(linkstack& s, BinTree& e);

typedef struct ssnode {
	selemtype data;
	ssnode* next;
}*linkstacks;
bool isempty(linkstacks s);
void initstack(linkstacks& s);
void push(linkstacks& s, selemtype e);
void pop(linkstacks& s, selemtype& e);

