#include"maze.h"
bool exist(pos p, pos &q,int map[10][10])
{
	if (in_maze(p,map))
	{
		q = p;
		return true;
	}
	else
		return false;
		
}

bool in_maze(pos p, int map[10][10])
{
	return (p.x > 0 && p.x < 9 && p.y > 0 && p.y < 9 && ((map[p.x][p.y] == 0) || (map[p.x][p.y]==3)));
}

pos next(pos p, int i, int j)
{

	p.x += i;
	p.y += j;
	return p;	
}
void printMaze(const int maze[10][10]) {
	int rows = 10;
	int cols = 10;

	// 输出上边框
	for (int i = 0; i < cols + 2; i++) {
		cout << "# ";
	}
	cout <<endl;


	for (int i = 0; i < rows; i++) {
		cout << "# ";

		for (int j = 0; j < cols; j++) {
			if (maze[i][j] == 1) {
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

		cout << "# " <<endl; // 右边框
	}

	// 输出下边框
	for (int i = 0; i < cols + 2; i++) {
		std::cout << "# ";
	}
	cout <<endl;
}
