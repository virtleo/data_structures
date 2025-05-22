#pragma once
#include<iostream>
#include<limits.h>
using namespace std;
#define maxvalue INT_MAX
#define numv 50
typedef int vextype;
typedef int arctype;
typedef struct {
	vextype ves[numv];
	arctype ars[numv][numv];
	int n, e;
	int kind;
}mtgraph;
int isempty(mtgraph& g);
int LocateVex(mtgraph G, char u);
void creategraph(mtgraph& G);
arctype getweight(mtgraph& g, vextype u, vextype v);
vextype getvalue(mtgraph& g, int i);
int getfirstneighbor(const mtgraph& g, vextype u);
int getnextneighbor(const mtgraph& g, vextype u, vextype v);
struct arcnode {//边节点
	int dest;//下标
	arctype cost;//权值
	arcnode *next;//下一个节点
};
typedef struct {
	vextype data;
	arcnode* firstadj;//第一个邻接点
}vexnode;
struct adjgraph {
	vexnode vexs[numv];//顶点数组
	int n, e,kind;
};
void creatgraph(adjgraph& g);
arctype getweight(const adjgraph& g, vextype u, vextype v);
arctype getfirstneighbor(const adjgraph& g, vextype u);
arctype getnextneighbor(const adjgraph& g, vextype u, vextype v);
void DFS(const adjgraph& g, int v, int visited[]);
void graph_traverse(adjgraph& g);

struct qnode {
	vextype data;
	qnode* next;
};
struct linkqueue {
	qnode *front, *rear;
};
void initqueue(linkqueue& Q);
bool isempty(const linkqueue& Q);
bool enqueue(linkqueue& Q, vextype x);
bool dequeue(linkqueue& Q, vextype& x);

void BFS(const mtgraph& g, int s, int visited[]);
void printgraph(const mtgraph& g);
