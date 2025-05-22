#pragma once
#include<iostream>
#include<string>
struct person
{
	std::string name;
	char sex;
};
using namespace std;
const int maxsize = 100;
typedef person elemtype;
typedef struct qnode
{
	elemtype *elem;
	int rear, front;
}seqqueue;
bool initqueue(seqqueue& L);
bool isempty(seqqueue& L);
bool isfull(seqqueue L);
bool enqueue(seqqueue& L,elemtype& e);
bool dequeue(seqqueue& L, elemtype& e);
bool getfront( seqqueue& L, elemtype& e);
void traverse(const seqqueue& L);
void destory(seqqueue& L);
void tiaoshi(seqqueue L);




