#include "binary_tree.h"
#include<cstring>

int main() {
	const ElemType* elem = "ABF#G##D##CE###"; 
	const ElemType* in = "FGBDAEC";
	const ElemType* post = "GFDBECA";
	int n = strlen(in);
	BinTree T1;
	int i = 0;
	CreateBinTree(T1, elem, i);
	cout << "In_Traverse:" << endl;
	In_Traverse(T1);
	cout << endl;
	cout << "Post_Traverse:" << endl;
	Post_Traverse(T1);
	cout << endl;

	BinTree T2;
	CreateInPost(T2, in, post, n);
	cout << "Pre_Traverse:" << endl;
	Pre_Traverse(T2);
	cout << endl;

	DestroyTree(T1);
	DestroyTree(T2);
	return 0;
}
