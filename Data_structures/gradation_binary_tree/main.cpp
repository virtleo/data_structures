#include "gradation_binary_tree.h"

int main() {
	BinTree T;
	const ElemTypeT* elem = "ABF#G##D##CE###";
	int i = 0;
	CreateBinTree(T, elem, i);
	LevelOrder(T);
	return 0;
}