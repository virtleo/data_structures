#include "binary_search_tree.h"
int main()
{
	bst T;
	bstnode* p, * father;
	T = nullptr;
	int arr[] = { 53, 78, 65, 17, 1,87,9, 81, 15 };
	CreatBST(T,9,arr);
	cout << "查找元素87:";
	Find(T, 87, p, father);
	if(Find(T, 87))
		cout<<"找到了"<<endl;
	else
		cout<<"没找到"<<endl;
	cout << "查找元素22:";
	Find(T, 22, p, father);
	if (Find(T, 22))
		cout << "找到了" << endl;
	else
		cout << "没找到" << endl;
	cout << "insert 22:" << endl;
	Insert(T, 22);
	cout << "中序遍历:" << endl;
	InorderIter(T);
	return 0;
}