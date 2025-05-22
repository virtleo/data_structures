#include <iostream>

using namespace std;

class Base

{

private:

    int Y;

public:

    Base(int y = 0) { Y = y; cout << "Base(" << y << ")£Ün"; }

    ~Base() { cout << "~Base()£Ün"; }

    void print() { cout << Y << ""; }

};



class Derived :public Base

{

private:

    int Z;

public:

    Derived(int y, int z) :Base(y)

    {

        Z = z;

        cout << "Derived(" << y << "," << z << ")£Ün";

    }

    ~Derived() { cout << "¡«Derived()£Ün"; }

    void print()

    {

        Base::print();

        cout << Z << endl;

    }

};



void main()

{

    Derived d(10, 20);

    d.print();

}

