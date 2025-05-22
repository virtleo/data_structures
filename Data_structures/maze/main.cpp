#include"maze.h"
#include<vector>
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
	stack<pos>S;
	stack<pos>::linkstack s;
	S.initstack(s);
	cout << "请输入起点坐标 (x, y): ";
	cin >> start.x >> start.y;
	cout << "请输入终点坐标 (x, y): ";
	cin >> exit.x >> exit.y;
	p = start;
	S.push(s, p);
	map[start.x][start.y] = 1;
	map[exit.x][exit.y] = 3;

	vector<std::vector<bool>> visited(10, vector<bool>(10, false));
	visited[start.x][start.y] = true;
    while (!S.isempty(s)) {
        pos current;
        S.gettop(s, current);

        if (current.x == exit.x && current.y == exit.y) {
            while (!S.isempty(s)) {
                pos point;
                S.gettop(s, point);
                map[point.x][point.y] = -1;
                S.pop(s, p);
            }
            printMaze(map);
            return 0;
        }

        bool moved = false;
        for (int i = 0; i < 4; i++) {
            int newX = current.x + dx[i];
            int newY = current.y + dy[i];
            pos new1 = { newX, newY };

            if (in_maze(new1, map) && !visited[newX][newY]) {
                S.push(s, new1);
                visited[newX][newY] = true;
                //cout << "Moved to (" << newX << ", " << newY << ")" << endl;  // 调试输出
                moved = true;
                break;
            }
        }

        if (!moved) {
            //cout << "Backtracking from (" << current.x << ", " << current.y << ")" << endl;  // 调试输出
            S.pop(s, p);
        }
    }

    cout << "没有找到路径！" << endl;
    printMaze(map);
    return 0;

}