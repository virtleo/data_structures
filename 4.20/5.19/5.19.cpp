#include<iostream>
using namespace std;
class CComplex
{
    private:
        int  real, imag;
    public:
        CComplex(int r = 0, int i = 0):real(r), imag(i) {}
        //拷贝构造函数
        CComplex(const CComplex& c)
        {
            real=c.real;
            imag=c.imag;
        }
        //重载赋值运算符
        CComplex& operator=(const CComplex& c)
        {
            if(this!=&c)
            {
                real=c.real;
                imag=c.imag;
            }
            return *this;
        }
        //重载加法运算符
        friend CComplex operator+(CComplex a, CComplex b)
        {
            return CComplex(a.real + b.real, a.imag + b.imag);  
        }
        //重载减法运算符
        CComplex operator-(CComplex b)
        {
            return CComplex(real - b.real, imag - b.imag);
        }
        //重载乘法运算符
        friend CComplex operator*(CComplex a, CComplex b)
        {
            return CComplex(a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real);//(a+bi)(c+di)=(ac-bd)+(bc+ad)i
        }
        //重载除法运算符
        CComplex operator/(CComplex b)//(a+bi)/(c+di)=(ac + bd)/(c^2 + d ^2) +((bc - ad)/(c ^2 + d ^2)) i
        {
            return CComplex((real * b.real + imag * b.imag) / (b.real * b.real + b.imag * b.imag), (imag * b.real - real * b.imag) / (b.real * b.real + b.imag * b.imag));
        }
        //复数的==与！=判断
        bool operator==(CComplex b)
        {
            return (real == b.real) && (imag == b.imag);
        }
        friend bool operator!=(CComplex a, CComplex b)
        {
            return !(a == b);
        }
        //获取实部与虚部

        void GetRealPart()
        {
            cout << "The real part is: " << real << endl;
        }
        void GetImagPart()
        {
            cout << "The imaginary part is: " << imag << endl;
        }
        //重载输入运算符
        friend istream& operator>>(istream& in, CComplex& c)
        {
            in>>c.real>>c.imag;
            return in;
        }
        //重载输出运算符
        friend ostream& operator<<(ostream& out, CComplex& c)
        {
            if (c.imag > 0)
                out<<c.real<<" + "<<c.imag<<"i";
            else if (c.imag < 0)
                out<<c.real<<c.imag<<"i";
            else
                out<<c.real;          
            return out;
        }
};
int main()
{
    CComplex a;//默认构造函数
    CComplex b(1,2);//带参数构造函数
    CComplex c(b);//拷贝构造函数
    CComplex  d;//重载输入运算符
    cout<< "输入复数d:";
    cin >> d;
    cout << d<<endl;
    CComplex e = b + d;//重载加法运算符
    cout << "e = b + d = ";
    cout << e<<endl;
    CComplex f = b - d;//重载减法运算符
    cout << "f = b - d = ";
    cout << f<<endl;
    CComplex g = b * d;//重载乘法运算符
    cout << "g = b * d = ";
    cout << g<<endl;
    CComplex h = b / d;//重载除法运算符
    cout << "h = b / d = ";
    cout << h<<endl;
    cout << "b == c? " << (b == c) << endl;
    cout << "b != c? " << (b != c) << endl;
    b.GetRealPart();
    b.GetImagPart();

    return 0;
}