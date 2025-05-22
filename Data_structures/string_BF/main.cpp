#include "string_BF.h"
/*我使用的是定长数据结构，即数组*/
int main() {
    hstring *jihe=new hstring [4];

    // 初始化 jihe 数组
    for (int i = 0; i < 4; i++) {
        init(jihe[i]);
    }

    // 定义主串和子串
    const char* str1 = "ababcabcacbab";
    const char* str2 = "ababcabcacbab";
    const char* tr1 = "abcac";
    const char* tr2 = "edadc";

    // 填充 jihe 的数据
    const char* jiheq[4] = { str1, str2, tr1, tr2 };
    for (int i = 0; i < 4; i++) {
        jihe[i].len = strlen(jiheq[i]);
        for (int j = 0; j < jihe[i].len; j++) {
            jihe[i].ch[j] = jiheq[i][j];
        }
    }

    // 调用 bf 函数进行模式匹配
    int result1 = bf(jihe[0], jihe[2], 2);
    if (result1) {
        cout << "结果：" << result1 << endl;
    }
    else {
        cout << "结果:" <<result1<< endl;
    }

    int result2 = bf(jihe[1], jihe[3], 1);
    if (result2) {
        cout << "结果：" << result2 << endl;
    }
    else {
        cout << "结果：" << result2<<endl;
    }
    for (int i = 0; i < 4; i++)
    {
        clear(jihe[i]);
    }
    delete[] jihe;

    return 0;
}