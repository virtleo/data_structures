#include "Graph.h"

int main() {
	MTGraph G;
	CreateGraph(G);
	for (int i = 0; i < G.n; i++) {
		cout << G.vexs[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < G.n; i++) {
		for (int j = 0; j < G.n; j++) {
			cout << G.arcs[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int OD = ComulateOD(G, 1);
	cout << "下标为1的顶点的出度为：" << OD << endl;
	int col1 = GetFN(G, 2);
	cout << "下标为2的顶点的第一个邻接顶点v的下标为：" << col1 << endl;
	int col2 = GetSN(G, 2, 0);
	cout << "下标为2的顶点的邻接顶点v的下一个邻接顶点的下标：" << col2 << endl;
	return 0;
}