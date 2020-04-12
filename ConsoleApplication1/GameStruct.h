#pragma once
#include "includes.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_ESCAPE 27
#define KEY_Q 81

static struct GameStruct
{
	static struct GameFields
	{
		char fields[9];
	};
public:
	char pSymbol1 = ' ';
	char pSymbol2 = ' ';
	GameStruct() {
		matchCreated = false;
		symbolSelected = false;
	};
	static const char pSymbol_X = 'X';
	static const char pSymbol_O = 'O';
	static const char blank = ' ';
	//enum opponentPlayer { AIPlayer , NetPlayer};
	int opponentPlayer = 0;
	bool matchCreated;
	bool symbolSelected;
	static const char gSelectorCursor = 219;
	char gameTypeSelectionArray[2] = { gSelectorCursor, blank};
	char gameSymbolSelectionArray[2] = { gSelectorCursor, blank };
}; 
