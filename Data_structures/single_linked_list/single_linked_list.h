#include<iostream>
#include<fstream>
using namespace std;
typedef int elemtype;
const int ok = 1;
const int error = 0;
typedef void status;
typedef struct lnode
{
	elemtype data;
	struct lnode* next;
}*linklist;
status initlist(linklist& L);
elemtype length(const linklist& L);
status traverse(const linklist& L);
status greathead(linklist& L, elemtype n);
status greatrear(linklist& L, elemtype n);
status linkinsert(const linklist& L,int i,elemtype e);
status linkdelete(const linklist& L, int i);
status linklocate(const linklist& L, elemtype e);




