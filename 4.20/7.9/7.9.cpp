#include <iostream>
#include <string>
using namespace std;
string gaocheng(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    int len = len1 + len2;
    string arr="";
    int a1[151]={0}, a2[152] = {0}, a3[1102] = {0};
    for (int i = 0; i < len1; i++)
        a1[i] = s1[len1 - i - 1] - '0';
    for (int i = 0; i < len2; i++)
        a2[i] = s2[len2 - i - 1] - '0';
    for (int i = 0; i < len1; i++)
    {
        for (int j=0;j<len2;j++)
        {
            a3[i + j] += a1[i] * a2[j];
            if (a3[i + j] >= 10)
            {
                a3[i + j + 1] += a3[i + j] / 10;
                a3[i+j]=a3[i+j]%10;
            }
        }
    }
    if (a3[len])
        len++;
    while (len > 1 && a3[len - 1] == 0)
        len--;
    for(int i=len-1;i>=0;i--)
        arr+=to_string(a3[i]);
    return arr;
}
 string gaojia(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    int len=len1>len2?len1:len2;
    string arr="";
    int a1[151]={0}, a2[152]={0}, a3[1102] = {0};
    for (int i = 0; i < len1; i++)
        a1[i] = s1[len1 - i - 1] - '0';
    for (int i = 0; i < len2; i++)
        a2[i] = s2[len2 - i - 1] - '0';
    for (int i = 0; i < len; i++)
    {
        a3[i] = a1[i] + a2[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (a3[i] >= 10)
        {
            a3[i + 1] += a3[i] / 10;
            a3[i] = a3[i] % 10;
        }
    }
    if(a3[len])
        len++;
    for(int i=len-1;i>=0;i--)
        arr+=to_string(a3[i]);
    return arr;
}
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    s1 = to_string(1);
    s2 = to_string(1);
    string sum="0";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j <= n+1-i; j++)
        {
            s1 = gaocheng(s1, to_string(j));
        }
        sum = gaojia(sum, s1);
        s1 = to_string(1);
    }
    cout << sum << endl;
    return 0;
}
