#include<iostream>
#include<string>//¼Ó 
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int a1[51] = { 0 }, a2[51] = {0}, a3[52] = { 0 };
    int len;//int len=s1.size()
    if (s1.length() > s2.length())//if (s1.length()<s2.length())
        len = s1.length();//len=s2.length();
    else
        len = s2.length();
    for (int i = 0; i < s1.size(); i++)
        a1[s1.size() - 1 - i] = s1[i] - '0';
    for (int j = 0; j < s2.length(); j++)
        a2[s2.size() - 1 - j] = s2[j] - '0';
    for (int i = 0; i < len; i++)
        a3[i] = a1[i] + a2[i];
    for (int i = 0; i < len; i++)
    {
        if (a3[i] >= 10)
        {
            a3[i + 1] = a3[i + 1] + a3[i] / 10;
            a3[i] = a3[i] % 10;
        }
    }
    if (a3[len] != 0)
        len++;
    for (int i = len - 1; i >= 0; i--)
    {
        cout << a3[i];
    }
    return 0;
}
