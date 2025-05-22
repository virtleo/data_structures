#pragma once
#include <iostream>
using namespace std;
typedef struct pnode
{
	float coef;
	int exp;
	pnode* next;
}*polynomial;
polynomial fanzhuan(polynomial& b);
void createpolyn(polynomial& L, int n);
void orderinsert(polynomial& L, int n);
void add(polynomial& a, polynomial& b, polynomial& c);
void sub(polynomial& a, polynomial& b, polynomial& c);
void traverse(polynomial& L);
void reverse(polynomial& L);
float evaluate(polynomial& L,float x);


