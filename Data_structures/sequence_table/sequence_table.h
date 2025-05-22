using namespace std;
#include<iostream>
typedef int elemtype;
const bool error = false;
const bool ok = true;
const int Maxsize = 100;
typedef struct
{
	elemtype* elem;
	int length;
	int maxsize;
}sqlist;
bool initlist(sqlist&);
bool initinsert(sqlist&, int, elemtype);
bool listdelete(sqlist&, int);
elemtype getelem(sqlist&, int);
void bianli(sqlist&);
void qingkong(sqlist&);
void xiaohui(sqlist&);
int getbianhao(sqlist&, elemtype);

