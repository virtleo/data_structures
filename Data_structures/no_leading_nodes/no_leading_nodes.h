#pragma once
#include<iostream>
using namespace std;
typedef int elemtype;
typedef void status;
const int ok = 1;
const int error = 0;
typedef struct lnode
{
	elemtype data;
	struct lnode* next;
}*linklist;
status initlist(linklist& L);
status traverse(const linklist& L);
status length(const linklist& L);
status getelem(const linklist& L, int i);
status greathead(linklist& L, elemtype n);
status greatrear(linklist& L, elemtype n);
bool linkinsert( linklist& L, int i, elemtype e);
status linkdelete( linklist& L, int i);
status qingkong(linklist& L);
status xiaohui(linklist& L);
status linklocate(const linklist& L, elemtype e);
