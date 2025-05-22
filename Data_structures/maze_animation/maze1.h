#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include<string>
#include <chrono>
#include <thread>
using namespace std;
struct pos {
	int x;
	int y;
};
void draw_maze(sf::RenderWindow& window, int maze[10][10]);
void printMaze(const int maze[10][10], pos start);
typedef pos elemtype;
typedef struct snode
{
	elemtype data;
	snode* next;
}*linkstack;
void initstack(linkstack& s);
bool isempty(const linkstack& s);
void push(linkstack& s, elemtype e);
void pop(linkstack& s, elemtype& e);
bool gettop(linkstack& s, elemtype& e);
void clear(linkstack& s);
void destroy(linkstack& s);
int length(const linkstack& s);
bool recu_go_maze(int(&map)[10][10], int i, int j, linkstack& s, sf::RenderWindow& window);
