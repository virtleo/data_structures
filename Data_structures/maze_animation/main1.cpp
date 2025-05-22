#include "maze1.h"
#include <SFML/Graphics.hpp>
#include<windows.h>
int main()
{
	int map[10][10] = {
   { 9,9,9,9,9,9,9,9,9,9 },
   { 9,0,0,9,0,0,0,9,0,9 },
   { 9,0,0,9,0,0,0,9,0,9 },
   { 9,0,0,0,0,9,9,0,0,9 },
   { 9,0,9,9,9,0,0,0,0,9 },
   { 9,0,0,0,9,9,0,0,0,9 },
   { 9,0,9,0,0,0,9,0,9,9 },
   { 9,0,9,9,9,0,9,9,0,9 },
   { 9,9,0,0,0,0,0,0,0,9 },
   { 9,9,9,9,9,9,9,9,9,9 } };
	int dx[] = { 0,1,0,-1 };
	int dy[] = { -1,0,1,0 };
	pos p, start, exit, q;
	linkstack s;
	initstack(s);
	cout << "请输入起点坐标 (x, y): ";
	cin >> start.x >> start.y;
	cout << "请输入终点坐标 (x, y): ";
	cin >> exit.x >> exit.y;
	p = start;
	push(s, p);
	map[start.x][start.y] = 0;
	map[exit.x][exit.y] = 3;
	sf::RenderWindow window(sf::VideoMode(10 * 50, 10 * 50), "Maze Solver");
	if (recu_go_maze(map, p.x, p.y, s,window))
		cout << "finish" << endl;
	else
		cout << "not find" << endl;
	printMaze(map, start);

	
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// 清屏
		window.clear();

		// 绘制迷宫
		draw_maze(window, map);

		// 更新窗口
		window.display();
	}

	return 0;
}