#pragma once
#include<iostream>
using namespace std;
typedef int elemtype;
typedef bool status;
const int ok = 1;
const int error = 0;
const int Maxsize = 100;
typedef struct
{
	elemtype* elem;
	int length;
	int maxsize;
}sqlist;
typedef struct lnode
{
	elemtype data;
	struct lnode* next;
}*linklist;
status init(sqlist& L);
status initinsert(sqlist& L, int i, elemtype e);
elemtype getelem(sqlist& L, int i);
status bianli(sqlist& L);
status initlist(linklist& L);
status traverse(const linklist& L);
status greathead(linklist& L, elemtype n,sqlist&L1);
