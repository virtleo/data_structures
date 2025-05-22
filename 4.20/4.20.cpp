#include<iostream>
using namespace std;
class area_cl
{
    protected:
        double height,width;
    public:
        area_cl(double h,double w)
        {
            height=h;
            width=w;
        }
        virtual double area()=0;
};
class rectangle:public area_cl
{
    public:
        rectangle(double h,double w):area_cl(h,w)
        {}
        double area()
        {
            return height*width;
        }
};
class triangle:public area_cl
{
    public:
        triangle(double h,double w):area_cl(h,w)
        {}
        double area()
        {
            return 0.5*height*width;
        }
};
int main()
{
    rectangle r(10.0,5.0);
    triangle t(4,6);
    area_cl* p;
    p=&r;
    cout<<"Area of Rectangle is "<<p->area()<<endl;
    p=&t;
    cout<<"Area of Triangle is "<<p->area()<<endl;
    cout<<"Area of Rectangle is "<<r.area()<<endl;
    cout<<"Area of Triangle is "<<t.area()<<endl;
    return 0;
}