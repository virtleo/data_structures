#include<iostream>  
#include<vector>  
using namespace std;

int main()
{
    const int MAX_SIZE = 1e5;
    vector<int> a(MAX_SIZE, 0);
    int i = 0;
    // 读取输入，直到遇到文件结束符  
    while (i < MAX_SIZE && cin >> a[i++]);
    // 如果输入的数据少于MAX_SIZE个，则调整数组大小以节省空间  
    a.resize(i);

    int decreasingCount = 0; // 下降的数量  
    int nonDecreasingCount = 0; // 非下降的数量（包括相等的情况）  
    for (int j = 0; j < a.size() - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            decreasingCount++;
        }
        else
        {
            nonDecreasingCount++;
        }
    }

    cout << "Number of decreasing pairs: " << decreasingCount << endl;
    cout << "Number of non-decreasing pairs: " << nonDecreasingCount << endl;
    return 0;
}