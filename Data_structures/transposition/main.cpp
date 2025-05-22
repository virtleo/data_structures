#include "transposition.h"

int main() {
	int mar[6][6] = {
		{0,12,9,0,0,0},
		{0,0,0,0,0,0},
		{-3,0,0,0,14,0},
		{0,0,24,0,0,0},
		{0,18,0,0,0,0},
		{15,0,0,-7,0,0}
	};
	int rows = 6, cols = 6;
	matrix m;
	int v = 0;
	init(m, rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			m.elem[v].value = mar[i][j];
			m.elem[v].row = i;
			m.elem[v].col = j;
			v++;
		}
	}
	m.count = v;
	matrix a, b;
	cout << "Original Matrix:" << endl;
	print(m);
	cout << "bf:" << endl;
	a=bf(m);
	print(a);
	cout << "fast:" << endl;
	b=fast(m);
	print(b);
	return 0;
}