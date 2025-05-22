#include"single_linked_list.h"
//int main()
//{
//	linklist a;
//	initlist(a);
//	greathead(a, 5);
//	traverse(a);
//	cout << length(a)<<endl;
//	linklist b;
//	initlist(b);
//	greatrear(b, 5);
//	traverse(b);
//	cout << length(b) << endl;
//	linklist L;
//	initlist(L);
//	cout << length(L) << endl;
//	return 0;
//}
int main()
{
	linklist a;
	initlist(a);
	for (int i=1;i<=5;i++)
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