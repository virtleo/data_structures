#include "adjacent.h"

int isempty(mtgraph& g)
{
	return g.n==0;
}

int LocateVex(mtgraph G, int u)
{
	for (int i = 0; i < G.n; i++) {
		if (G.ves[i] == u) {
			return i;
		}
	}
}
void creategraph(mtgraph& G)
{
	int i, j, w;
	int u, v;
	cout << "请依次输入顶点个数、边数、图的类型：" << endl;
	cin >> G.n >> G.e >> G.kind;
	for (i = 0; i < G.n; i++) {
		for (j = 0; j < G.n; j++) {
			if (G.kind == 2) {
				G.ars[i][j] = maxvalue;
			}
			else {
				G.ars[i][j] = 0;
			}
		}
	}
	cout << "请输入顶点：" << endl;
	for (i = 0; i < G.n; i++) {
		cin >> G.ves[i];
	}

	cout << "请输入u,v以及权值：" << endl;
	for (int k = 0; k < G.e; k++) {
		cin >> u >> v >> w;
		i = LocateVex(G, u);
		j = LocateVex(G, v);
		G.ars[i][j] = w;
		if (G.kind == 0) {
			G.ars[j][i] = G.ars[i][j];
		}
	}

}
arctype getweight(mtgraph& g, vextype u, vextype v)
{
	if (u != -1 && v != -1)
		return g.ars[u][v];
	else
		return 0;
}
vextype getvalue(mtgraph& g, int i)
{
	return i >= 0 && i < g.n ? g.ves[i] : '\0';
}
int getfirstneighbor(const mtgraph& g, vextype u)
{
	if (u != -1 && u < g.n)
	{
		for (int col = 0; col < g.n; col++)
		{
			if (g.ars[u][col] > 0 && g.ars[u][col] != maxvalue)
			{
				return col;
			}
		}
	}
	return -1;
}
int getnextneighbor(const mtgraph& g, vextype u, vextype v)
{
	if (u != -1 && v != -1)
	{
		for (int col = v + 1; col < g.n; col++)
		{
			if (g.ars[u][col] > 0 && g.ars[u][col] != maxvalue)
			{
				return col;
			}
		}
	}
	return -1;
}

void creatgraph(adjgraph& g)
{
	cout << "请依次输入顶点个数、边数、图的类型：" << endl;
	cin >> g.n >> g.e >> g.kind;
	cout << "请输入顶点：" << endl;
	for (int i = 0; i < g.n; i++)
	{
		cin >> g.vexs[i].data;
		g.vexs[i].firstadj = nullptr;
	}
	cout << "请输入u,v以及权值：" << endl;
	for (int i = 0; i < g.e; i++)
	{
		int u, v, w;
		cin>>u>>v>>w;
		arcnode* p = new arcnode;
		p->dest = v;
		p->cost = w;
		p->next = g.vexs[u].firstadj;
		g.vexs[u].firstadj = p;
	}
	
}

arctype getweight(const adjgraph& g, vextype u, vextype v)
{
	if (u != -1 && v != -1)
	{
		arcnode* p = g.vexs[u].firstadj;
		while (p)
		{
			if (p->dest == v)
				return p->cost;
			else
				p = p->next;
		}
	}
	return 0;
}

arctype getfirstneighbor(const adjgraph& g, vextype u)
{
	if (u != -1 && u < g.n)
	{
		arcnode* p = g.vexs[u].firstadj;
		if (p)
			return p->dest;
	}
	return -1;
}

arctype getnextneighbor(const adjgraph& g, vextype u, vextype v)
{
	if (u != -1 && v != -1)
	{
		arcnode* p = g.vexs[u].firstadj;
		while (p)
		{
			if (p->dest == v && p->next)
			{
				return p->next->dest;
			}
			p = p->next;
		}
	}
	return -1;
}

void DFS(const adjgraph& g, int v, int visited[])
{
	cout<<g.vexs[v].data<<" ";
	visited[v] = 1;
	int w=getfirstneighbor(g,v);
	while (w != -1)
	{
		if (!visited[w])
		{
			DFS(g, w, visited);
			
		}
		w=getnextneighbor(g,v,w);
	}
}

void graph_traverse(adjgraph& g)
{
	int visited[numv];
	for (int i = 0; i < g.n; i++)
	{
		visited[i] = 0;
	}
	for (int i = 0; i < g.n; i++)
	{
		if (!visited[i])
		{
			DFS(g, i, visited);
		}
	}

}
void initqueue(linkqueue& Q)
{
	Q.front = Q.rear = nullptr;
}
bool isempty(const linkqueue& Q)
{
	return Q.front == nullptr;
}
bool enqueue(linkqueue& Q, vextype x)
{
	qnode* p = new qnode;
	p->data = x;
	p->next = nullptr;
	if (!Q.front)
	{
		Q.front = Q.rear = p;
	}
	else
	{
		Q.rear->next = p;
		Q.rear = p;
	}
	return true;

}
bool dequeue(linkqueue& Q, vextype& x)
{
	if (!Q.front)
		return false;
	x = Q.front->data;
	qnode* p = Q.front;
	Q.front = Q.front->next;
	if (!Q.front)
		Q.rear = nullptr;
	delete p;
	return true;
}

void BFS(const mtgraph& g, int s, int visited[])
{
	cout << g.ves[s] << " ";
	visited[s] = 1;
	linkqueue q;
	initqueue(q);
	enqueue(q, s);
	while (!isempty(q)) {
		dequeue(q, s);
		int w = getfirstneighbor(g, vextype(s));
		while (w != -1) {
			if (!visited[w]) {
				cout << g.ves[w] << " ";
				visited[w] = 1;
				enqueue(q, w);
			}
			w = getnextneighbor(g, vextype(s), vextype(w));
		}
	}
}

void printgraph(const mtgraph& g)
{
	int visited[numv];
	for (int i = 0; i < g.n; i++)
	{
		visited[i] = 0;
	}
	for (int i = 0; i < g.n; i++)
	{
		if (!visited[i])
		{
			BFS(g, i, visited);
		}
	}
}
