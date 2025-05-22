#include <complex.h>
#include "complex.h"
int main()
{
    complex c1, c2,c3;
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    Creat(c1, a, b);
    Creat(c2, c, d);
    c3=Add(c1, c2);
    print(c3);
    return 0;
}