#pragma once
#include<iostream>
#include<string>
using namespace std;
typedef char elemtype;
typedef struct snode
{
	elemtype data;
	snode* next;
}*linkstack;
void initstack(linkstack& s);
bool isempty(const linkstack& s);
void push(linkstack& s, elemtype e);
void pop(linkstack& s, elemtype &e);
bool gettop(linkstack& s, elemtype& e);
void traverse(const linkstack& s);
void clear(linkstack& s);
void destroy(linkstack& s);
int length(const linkstack& s);

