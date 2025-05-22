#include"double_table.h"
int main()
{
	sqlist L1;
	linklist a;
	init(L1);
	for (int i = 0; i < 5; i++)
	{
		initinsert(L1, 1, 5 - i);
	}
	bianli(L1);
	initlist(a);
	greathead(a, 5, L1);
	traverse(a);


}