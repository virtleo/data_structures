#include "Huffman_tree.h"

int main() {
	HuffmanTree HT;
	Linkstack S;
	Init(S);
	char data[] = { 'A', 'B', 'B', 'A', 'D', 'F', 'K', 'A', 'S', 'D', 'F', 'A', 'A', 'S', 'D', 'F', 'S', 'D', 'D', 'D', 'S', 'D', 'A' };
	char unique_data[] = { 'A', 'B', 'D', 'F', 'K', 'S' };
	int w[6];
	for (int i = 0; i < 6; i++) {
		w[i] = 0;
		for (int j = 0; j < sizeof(data) / sizeof(data[0]); j++) {
			if (data[j] == unique_data[i]) {
				w[i]++;
			}
		}
	}
	cout << "字符及其频次：" << endl;
	for (int k = 0; k < sizeof(unique_data) / sizeof(unique_data[0]); k++) {
		cout << unique_data[k] << ":" << w[k] << endl;
	}
	CreatHuffmanTree(HT, w, unique_data, 6);
	cout << "字符及其最优编码：" << endl;
	EncodeHT(HT, S);
	int WPL;
	WPL = GetHTWPL(HT);
	cout << "The WPL:" << WPL << endl;
	const string seq = "ABBADFKASDFAASDFSDDDSDA";
	string code;
	EncodeT(seq, code);
	cout << "目标报文T编码:" << endl;
	cout << code << endl;
	cout << "源报文s：" << endl;
	DecodeHT(HT, code);
	return 0;
}