#include "polynomial_of_one.h"
int main()
{
	pnode* A,*B, *C, *D, *E;
    // 测试样例 A: 7 + 3x + 9x^8 + 5x^17
    cout << "Input for polynomial A :" << endl;
    createpolyn(A, 4);
    cout << "Polynomial A: ";
    traverse(A);

    // 测试样例 B: 8x + 22x^7 - 9x^8
    cout << "Input for polynomial B :" << endl;
    orderinsert(B, 3);
    cout << "Polynomial B: ";
    traverse(B);

    // 相加
    polynomial sum;
    add(A, B, sum);
    cout << "Sum of A and B: ";
    traverse(sum);

    // 测试样例 C: 1 + x + x^2
    cout << "Input for polynomial C :" << endl;
    orderinsert(C, 3); 
    cout << "Polynomial C: ";
    traverse(C);

    // 测试样例 D: x^2 - 5x^3
    cout << "Input for polynomial D :" << endl;
    orderinsert(D, 2); 
    cout << "Polynomial D: ";
    traverse(D);

    // 相减
    polynomial difference;
    sub(C, D, difference);
    cout << "Difference of C and D: ";
    traverse(difference);

    // 测试样例 E: -5 + 2x + 4x^6 - 10x^9   
    cout << "Input for polynomial E :" << endl;
    orderinsert(E, 4); 
    cout << "Polynomial E: ";
    traverse(E);

    // 求值在 x = 2 时
    float x = 2.0;
    float value = evaluate(E, x);
    cout << "Value of E at x = " << x << ": " << value << endl;

	return 0;
}
