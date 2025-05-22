#include"sequence_table.h"
int main()
{
	/*1）声明一个顺序表，初始化*/
	sqlist L;
	initlist(L);
	/*2）在该顺序表中插入1,2,3,4,5，每次均在编号1处*/
	for (int i = 0; i < 5; i++)
	{
		initinsert(L, 1, i + 1);
	}
	/*3）遍历*/
	bianli(L);
	/*4）在编号6插入6*/
	initinsert(L, 6, 6);
	/*5）分别查找并打印5,6，2这三个元素及其位置*/
	cout<<"元素位置编号："<<getbianhao(L, 5) <<"元素:"<< getelem(L, getbianhao(L, 5)) << endl;
	cout << "元素位置编号：" << getbianhao(L, 6) << "元素:" << getelem(L, getbianhao(L, 6)) << endl;
	cout << "元素位置编号：" << getbianhao(L, 2) << "元素:" << getelem(L, getbianhao(L, 2)) << endl;
	/*6）在编号2插入7,8,9,10，11*/
	for (int i = 7; i < 12; i++)
	{
		initinsert(L, 2, i);
	}
	/*7）遍历*/
	bianli(L);
	/*8）删除第一个位置的元素，并打印该元素*/
	cout <<"删除第一个位置的元素，并打印该元素:"<< getelem(L, 1);
	listdelete(L, 1);
	/*9）删除第一个位置的元素，并打印该元素*/
	cout << "删除第一个位置的元素，并打印该元素:" << getelem(L, 1);
	listdelete(L, 1);
	/*10）遍历*/
	bianli(L);
	/*11）删除第编号为9的元素，并打印该元素，打印此时顺序表长度*/
	cout << "删除第编号为9的元素，并打印该元素:"<<getelem(L, 9);
	listdelete(L, 9);
	/*打印此时顺序表长度*/
	cout <<"打印此时顺序表长度:"<< L.length << endl;
	/*12）遍历*/
	bianli(L);
	/*13）清空顺序表并打印顺序表长度*/
	qingkong(L);
	cout <<"清空顺序表并打印顺序表长度:"<< L.length << endl;
	/*14）在第2编号处插入10，结果插入成功，打印“成功插入”，否则打印“插入不成功”*/
	initinsert(L, 2, 10);
	if (initinsert(L, 2, 10) == false)
	{
		cout << "插入不成功"<<endl;
	}
	else
	{
		cout << "成功插入" << endl;
	}
	/*15）依次插入1,2,3,4,5，每次均在最后一个结点的后一个位置处*/
	for (int i = 0; i < 5; i++)
	{
		initinsert(L, L.length + 1, i + 1);
	}
	/*16）遍历*/
	bianli(L);
	/*17）销毁顺序表*/
	xiaohui(L);
	return 0;
	
}