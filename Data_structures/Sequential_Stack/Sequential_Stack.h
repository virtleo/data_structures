#pragma once
#include<iostream>
using namespace std;
const int maxsize = 100;
typedef int elemtype;
typedef struct
{
	elemtype* elem;
	int top;
	int size;

}seqstack;
bool initstack(seqstack& s);
bool isempty(const seqstack& s);
bool isfull(const seqstack& s);
bool push(seqstack& s, elemtype e);
bool pop(seqstack& s, elemtype& e);
bool gettop(seqstack& s, int &i,elemtype &e);
bool traverse(const seqstack& s);
bool clear(seqstack& s);
bool destroy(seqstack& s);



