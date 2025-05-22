#pragma once
#include<iostream>
using namespace std;
typedef int elemtype;
struct qnode
{
	elemtype data;
	qnode* next;
};
struct linkqueue
{
	qnode* front,*rear;
};
void initqueue(linkqueue& L);
bool isempty(linkqueue L);
bool getfront(linkqueue& L, elemtype& e);
bool enqueue(linkqueue& L, elemtype e);
bool dequeue(linkqueue& L, elemtype& e);
void traverse(const linkqueue& L);
void destory(linkqueue& L);
void tiaoshi(linkqueue L);


