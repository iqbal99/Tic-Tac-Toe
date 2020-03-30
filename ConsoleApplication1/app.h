#pragma once
#include <iostream>
#include <windows.h>
#include <Winuser.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class app
{
private:

public:
	int tempPosition;
	struct GameChar
	{
		char X = 'X';
		char O = 'O';
		char blank = ' ';
	};
	char field[9];
	
public:
	
	app()
	{
		std::cout << "constructor inialized" << std::endl;
		initGame();
	}
	~app()
	{
		std::cout << "destructor initialized" << std::endl;
	}
	void createMatch()
	{
		std::cout << "match created" << std::endl;
	
	}
	void drawGraphics(char field[]);
	void startScreen();
	void initGame();
	void makeMove(char gc, int position);
	void fillField(char gc, int position);
	
};

