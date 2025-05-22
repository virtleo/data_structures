#include "no_leading_nodes.h"
int main()
{
	linklist LA;
	initlist(LA);
	traverse(LA);
	getelem(LA, 2);
	linklist LB;
	initlist(LB);
	int n = 5;
	greathead(LB, n);
	traverse(LB);
	getelem(LB, 1);
	getelem(LB, 5);
	getelem(LB, 6);
	linklist LC;
	initlist(LC);
	greatrear(LC, n);
	traverse(LC);
	getelem(LC, 0);
	getelem(LC, 5);
	getelem(LC, 6);
	qingkong(LB);
	traverse(LB);
	xiaohui(LA);
	xiaohui(LB);
	xiaohui(LC);

	linklist a;
	initlist(a);
	for (int i = 1; i <= 5; i++)
		linkinsert(a, 1, i);
	linkinsert(a, 6, 6);
	linkinsert(a, 3, 33);
	traverse(a);
	linklocate(a, 5);
	linklocate(a, 6);
	linklocate(a, 3);
	linklocate(a, 12);
	linkdelete(a, 1);
	linkdelete(a, 5);
	linkdelete(a, 3);
	linkdelete(a, 20);
	traverse(a);
	a = NULL;
	return 0;
}