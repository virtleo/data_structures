#include "maze1.h"


bool recu_go_maze(int(&map)[10][10], int i, int j, linkstack& s, sf::RenderWindow& window)
{
	pos q;
	if (map[i][j] == 3)
	{
		return true;
		push(s, pos{ i,j });
	}

	if (map[i][j] == 0)
	{
		push(s, pos{ i,j });
		map[i][j] = -1;

		window.clear();
		draw_maze(window, map);
		window.display();
		this_thread::sleep_for(chrono::milliseconds(200));

		if (recu_go_maze(map, i + 1, j, s,window))
			return true;
		if (recu_go_maze(map, i - 1, j, s, window))
			return true;
		if (recu_go_maze(map, i, j + 1, s, window))
			return true;
		if (recu_go_maze(map, i, j - 1, s, window))
			return true;
		pop(s, q);
		map[i][j] = 0;

		window.clear();
		draw_maze(window, map);
		window.display();
		this_thread::sleep_for(chrono::milliseconds(200));
	}
	return false;
}
void draw_maze(sf::RenderWindow& window, int maze[10][10]) {
	sf::RectangleShape cell(sf::Vector2f(50, 50));
	maze[1][1] = 1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cell.setPosition(i * 50, j * 50);
			if (maze[j][i] == 9) {
				cell.setFillColor(sf::Color::Black);  // 墙壁
			}
			else if (maze[j][i] == -1) {
				cell.setFillColor(sf::Color::Green);  // 路径
			}
			else if (maze[j][i] ==1 ) {
				cell.setFillColor(sf::Color::Blue);  // 起点
			}
			else if (maze[j][i] == 3) {
				cell.setFillColor(sf::Color::Red);  // 终点
			}
			else {
				cell.setFillColor(sf::Color::White);  // 空地
			}
			window.draw(cell);
		}
	}
}
void printMaze(const int maze[10][10], pos start) {
	int rows = 10;
	int cols = 10;

	// 输出上边框
	for (int i = 0; i < cols + 2; i++) {
		cout << "# ";
	}
	cout << endl;


	for (int i = 0; i < rows; i++) {
		cout << "# ";

		for (int j = 0; j < cols; j++) {
			if (start.x == i && start.y == j) {
				cout << "S "; // 起点标记为"S"
			}
			else if (maze[i][j] == 3) {
				cout << "E "; // 终点标记为"E"
			}
			else if (maze[i][j] == 0) {
				cout << "  "; // 空路径
			}
			// 在路径上画线
			else if (maze[i][j] == -1) {
				cout << "x ";
			}
			else {
				cout << "█ "; // 墙壁
			}
		}

		cout << "# " << endl; // 右边框
	}

	// 输出下边框
	for (int i = 0; i < cols + 2; i++) {
		std::cout << "# ";
	}
	cout << endl;
}

void initstack(linkstack& s)
{
	s = NULL;
}

bool isempty(const linkstack& s)
{
	return s == NULL;
}

void push(linkstack& s, elemtype e)
{
	snode* p = new snode;
	p->data = e;
	p->next = s;
	s = p;
}

void pop(linkstack& s, elemtype& e)
{
	if (isempty(s))
		return;
	snode* p = s;
	s = p->next;
	e = p->data;
	delete p;

}

bool gettop(linkstack& s, elemtype& e)
{
	if (isempty(s))
		return false;
	e = s->data;
	return true;
}


void clear(linkstack& s)
{
	s = NULL;
}

void destroy(linkstack& s)
{
	delete s;
}
int length(const linkstack& s)
{
	int i = 1;
	snode* q = s;
	while (!isempty(s->next))
	{

		q = q->next;
		i++;
	}
	delete q;
	return i;
}
