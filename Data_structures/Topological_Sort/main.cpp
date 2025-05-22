#include "topology.h"

int main()
{
	adjgraph g;
	creatgraph(g);
	int* top = new int[g.n];
	topological_sort(g,top);
	delete[] top;
	return 0;
}