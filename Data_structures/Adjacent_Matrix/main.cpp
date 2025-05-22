#include "adjacent.h"
int main()
{
	/*adjgraph g;
	creatgraph(g);
	cout << "取0-1边上的权值";
	cout << getweight(g, 0, 1) << endl;
	cout << "取0的第一个邻接顶点：";
	cout << getfirstneighbor(g, 0) << endl;
	cout << "取0-1的下一个邻接顶点：";
	cout << getnextneighbor(g, 0, 1) << endl;
	cout << "DFS遍历：";
	int visited[numv]={0};
	DFS(g, 0, visited);*/
	mtgraph g;
	creategraph(g);
	cout << "取0-1边上的权值";
	cout << getweight(g, 0, 1) << endl;
	cout << "取0的第一个邻接顶点：";
	cout << getfirstneighbor(g, 0) << endl;
	cout << "取0-1的下一个邻接顶点：";
	cout << getnextneighbor(g, 0, 1) << endl;
	cout << "BFS遍历：";
	printgraph(g);
	return 0;
}