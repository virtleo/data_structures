#include <iostream>
#include<fstream>
#include"Box.h"
using namespace std;
void main()
{
    Box box1, box2(10 , 20), box3(15, 15, 15);
    box1.print();
    box1.Volume();
    box2.print();
    box2.Volume();
    box3.print();
    box3.Volume();
    wwjt(box1, box2, box3);

}