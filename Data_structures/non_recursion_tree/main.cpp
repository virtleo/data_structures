#include "non_recursion_tree.h"
int main()
{
	BinTree tree;
	creatEPtree(tree);
	cout << "pre:";
	pre_reverse(tree);
	cout << endl;
	cout << "in:";
	in_reverse(tree);
	cout << endl;
	cout << "non-pre:";
	preorderiter(tree);
	cout << endl;
	cout << "non-in:";
	inorderiter(tree);
	cout << endl;
	cout << "non-post:";
	postorderiter(tree);
	cout << endl;
	return 0;
}