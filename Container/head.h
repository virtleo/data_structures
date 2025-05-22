#pragma once
#include<iostream>
using namespace std;
class Container
{
protected:
	int r, h, a;
public:
	Container()
	{
		r = 1;
		h = 1;
		a = 1;
	}
	Container(int r)
	{
		this->r = r;
		h = 1;
		a = 1;
	}
	Container(int r, int h)
	{
		this->r = r;
		this->h = h;
		a = 1;
	}
	Container(int r, int h, int a)
	{
		this->r = r;
		this->h = h;
		this->a = a;
	}
	virtual ~Container(){}
	virtual void volume() = 0;
};
class Sphere :public Container
{
public:
	Sphere():Container(){}
	Sphere(int r):Container(r){}
	void volume();
};
class Cylinder :public Container
{
public:
	Cylinder():Container(){}
	Cylinder(int r, int h):Container(r, h){}
	void volume();
};
class Cube :public Container
{
public:
	Cube():Container(){}
	Cube(int a):Container(a, a, a){}
	void volume();
};
