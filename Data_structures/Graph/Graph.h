#include<iostream>
#include <climits>
using namespace std;

#define MaxValue INT_MAX
#define NumV 50 

typedef char VexType;
typedef int ArcType; 
typedef struct MTGraph {
	VexType vexs[NumV]; 
	ArcType arcs[NumV][NumV];  
	int n, e;
	int kind;
};

void CreateGraph(MTGraph& G);
int ComulateOD(MTGraph G, int u);
int LocateVex(MTGraph G, char u);
int GetFN(MTGraph& G, int v); 
int GetSN(MTGraph& G, int v, int w);