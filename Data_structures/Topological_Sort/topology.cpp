#include "topology.h"

void initstack(linkstack& S)
{
	S = nullptr;
}
bool isempty(const linkstack& s)
{
	return s == NULL;
}
void push(linkstack& s, vextype e)
{
	snode* p = new snode;
	p->data = e;
	p->next = s;
	s = p;
}
int length(const linkstack& s)
{
	int i = 0;
	snode* q = s;
	while (q != nullptr)
	{
		q = q->next;
		i++;
	}
	return i;
}
vextype pop(linkstack& S)
{
	if (isempty(S))
		cout << "Stack is empty!" << endl;
	snode* p = S;
	S = p->next;
	vextype e = p->data;
	delete p;
	return e;
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
		cin >> u >> v >> w;
		arcnode* p = new arcnode;
		p->dest = v-1;
		p->cost = w;
		p->next = g.vexs[u-1].firstadj;
		g.vexs[u-1].firstadj = p;
	}

}

void find_indegree(adjgraph& g, int* indegree) {
	for (int i = 0; i < g.n; i++) {
		arcnode* p = g.vexs[i].firstadj;
		while (p) {
			indegree[p->dest]++;
			p = p->next;
		}
	}
}
void traverse(linkstack& S) {
	if(!isempty(S)) {
		vextype data = pop(S);
		traverse(S);
		cout << data+1 << " ";
	}
}
vextype gettop(const linkstack& S)
{
	snode* p = new snode;
	p = S;
	return p->data;
}
void topological_sort(adjgraph& g, int* top)
{
	linkstack S,Q;
	initstack(S);
	initstack(Q);
	int* indegree = new int[g.n];
	for (int i = 0; i < g.n; i++)
		indegree[i] = 0;
	find_indegree(g, indegree);
	/*for (int k = 0; k < g.n; k++)
	{
		if (indegree[k] == 0)
			push(S, k);
	}
	for (int i = 0; i < g.n; i++)
	{

		if (isempty(S))
		{
			cout << "you huilu" << endl;
		}
		else
		{
			int j = pop(S);
			cout << j << " ";
			arcnode* p = g.vexs[j].firstadj;
			while (p)
			{
				indegree[p->dest]--;
				if (indegree[p->dest] == 0)
					push(S, p->dest);
				p = p->next;
			}
		}
	}*/

	for (int i = 0; i < g.n; i++)
	{
		if (!indegree[i])
		{
			push(S, i);
			push(Q, i);
		}
			

	}
	int k = 0;
	int l=length(S);
	while (!isempty(S))
	{
		int u = pop(S);
		top[k++] = u;
		arcnode* p = g.vexs[u].firstadj;
		while (p)
		{
			indegree[p->dest]--;
			if (!indegree[p->dest])
			{
				push(S, p->dest);
				push(Q, p->dest);
				l++;
			}
			p = p->next;
		}
	}
	if (k < g.n)
	{
		cout << "图中存在环！" << endl;
		return;
	}
	cout << "拓扑排序结果为：";
	traverse(Q);
	delete[] indegree;

}