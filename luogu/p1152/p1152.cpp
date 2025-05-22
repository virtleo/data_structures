#include<iostream>  
#include<vector>  
#include<set>  
#include<cmath>  
#include <algorithm>  
using namespace std;
int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int* he = new int[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        he[i] = abs(a[i + 1] - a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (he[i] > he[j])
            {
                swap(he[i], he[j]);
            }
        }
    }
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (he[i] != i + 1)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Jolly";
    }
    else
    {
        cout << "Not jolly";
    }
    return 0;
}