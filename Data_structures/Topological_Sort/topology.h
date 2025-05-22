#pragma once
#include<iostream>
using namespace std;
typedef int bstnode;
#define maxvalue INT_MAX
#define numv 50
typedef int vextype;
typedef int arctype;
typedef struct snode
{
	bstnode data;
	snode* next;
}*linkstack;
void initstack(linkstack& S);
bool isempty(const linkstack& S);
void push(linkstack& S, vextype e);
vextype pop(linkstack& S);
void traverse(linkstack& S);
vextype gettop(const linkstack& S);
int length(const linkstack& S);

struct arcnode {//边节点
	int dest;//下标
	arctype cost;//权值
	arcnode* next;//下一个节点
};
typedef struct {
	vextype data;
	arcnode* firstadj;//第一个邻接点
}vexnode;
struct adjgraph {
	vexnode vexs[numv];//顶点数组
	int n, e, kind;
};
void creatgraph(adjgraph& g);
void find_indegree(adjgraph& g, int* indegree);
void topological_sort(adjgraph& g, int* top);