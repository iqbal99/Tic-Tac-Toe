#pragma once
#include "includes.h"

class App
{
private:
	int tempPosition;
	GameStruct::GameFields * gFields = new GameStruct::GameFields;
	GameStruct* gStruct = new GameStruct;
	Player * player1 = nullptr;
	Player * player2 = nullptr;
	Graphics* graphics = new Graphics(gStruct);
	
private:
	
public:
	void initGame();
	void play(char player, int& tempPosition);
	App() {};
	~App() {
		delete gFields;
		gFields = nullptr;
		delete gStruct;
		gStruct = nullptr;
		delete player1;
		player1 = nullptr;
		delete player2;
		player2 = nullptr;
		delete graphics;
		graphics = nullptr;
	};
	void createMatch();
};


inline void App::initGame()
{
	if (gStruct->matchCreated == true) {
		
		play('X', tempPosition);
		graphics->drawGraphics(gFields, tempPosition);

	}
	else {
		for (int i = 0; i <= sizeof(gFields->fields); i++)
		{
			gFields->fields[i] = gStruct->blank;
		}
		graphics->drawStartScreen();
		createMatch();
	}
		
}


inline void App::play(char player, int &tempPosition)
{
	gFields->fields[tempPosition -1] = player;
}

inline void App::createMatch()
{
	if (gStruct->opponentPlayer == 0)
	{
		player1 = new HumanPlayer(gStruct->pSymbol_X);
		player2 = new AIPlayer(gStruct->pSymbol_O);
		gStruct->matchCreated = true;
		gStruct->pSymbol1 = player1->pSymbol;
		gStruct->pSymbol2 = player2->pSymbol;
	}
	else if (gStruct->opponentPlayer == 1)
	{
		player1 = new HumanPlayer(gStruct->pSymbol_X);
		player2 = new NetPlayer(gStruct->pSymbol_O);
		gStruct->matchCreated = true;
		gStruct->pSymbol1 = player1->pSymbol;
		gStruct->pSymbol2 = player2->pSymbol;
	}
}


