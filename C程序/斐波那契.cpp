
#include <iostream>
using namespace std;
 
int Fib(int i) {
    if((i == 0) || (i == 1)) // 终止状态，这里从0开始，而不是从1开始
        return 1;
    else
        return Fib(i - 1) + Fib(i - 2); // 归纳项
}
 
int main(int argc, const char * argv[]) {
    int n;
    
    while(cin >> n) {
        cout << "Fibonacci数第" << n << "项为:" << Fib(n-1) << endl;
    }
    return 0;
}