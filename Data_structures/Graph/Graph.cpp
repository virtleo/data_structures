#include "Graph.h"

void CreateGraph(MTGraph& G)
{
	int i, j, w;
	char u, v;
	cout << "请依次输入顶点个数、边数、图的类型：" << endl;
	cin >> G.n >> G.e >> G.kind;
	for (i = 0; i < G.n; i++) {
		for (j = 0; j < G.n; j++) {
			if (G.kind == 2) {
				G.arcs[i][j] = MaxValue;
			}
			else {
				G.arcs[i][j] = 0;
			}
		}
	}
	cout << "请输入顶点：" << endl;
	for (i = 0; i < G.n; i++) {
		cin >> G.vexs[i];
	}

	cout << "请输入u,v以及权值：" << endl;
	for (int k = 0; k < G.e; k++) {
		cin >> u >> v >> w;
		i = LocateVex(G, u);
		j = LocateVex(G, v);
		G.arcs[i][j] = w;
		if (G.kind == 0) {
			G.arcs[j][i] = G.arcs[i][j];
		}
	}

}

int ComulateOD(MTGraph G, int u)
{
	int OD = 0;
	if (u != -1 && u < G.n) {
		for (int i = 0; i < G.n; i++) {
			if (G.arcs[u][i] != 0 && G.arcs[u][i] != MaxValue) {
				OD++;
			}
		}
	}
	return OD;
}

int LocateVex(MTGraph G, char u)
{
	for (int i = 0; i < G.n; i++) {
		if (G.vexs[i] == u) {
			return i;
		}
	}
}

int GetFN(MTGraph& G, int v)
{
	if (v != -1 && v < G.n) {
		for (int col = 0; col < G.n; col++) {
			if (G.arcs[v][col] > 0 && G.arcs[v][col] < MaxValue) {
				return col;
			}
		}
	}
	return -1;
}

int GetSN(MTGraph& G, int v, int u)
{
	if (v != -1 && v < G.n && u != -1) {
		for (int col = u + 1; col < G.n; col++) {
			if (G.arcs[v][col] > 0 && G.arcs[v][col] < MaxValue) {
				return col;
			}
		}
	}
	return -1;
}


