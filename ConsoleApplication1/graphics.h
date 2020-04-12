#pragma once
#include <stdio.h>
#include "GameStruct.h"
class Graphics
{
private:
	GameStruct * gStruct = nullptr;
	struct drawPattern
	{
		char vertical, horizotal, topLeft, topRight, bottomLeft, bottomRight;
	};
	drawPattern dp;
public:
	Graphics(GameStruct * gStruct) 
	{
		this->gStruct = gStruct;
	};
	Graphics(char vertical, char horizotal, char topLeft, char topRight, char bottomLeft, char bottomRight)
	{
		dp.vertical = vertical; 
		dp.horizotal = horizotal; 
		dp.topLeft = topLeft;
		dp.topRight = topRight;
		dp.bottomLeft = bottomLeft;
		dp.bottomRight = bottomRight;
	};
	~Graphics() {};
	void drawGraphics(GameStruct::GameFields * gFields, int& tempPosition);
	void drawGraphics(char field[], int& tempPosition, bool drawPattern);
	void drawStartScreen();
	void optionSelector(char c);
	void drawScoreBox();
	void selectPlayerSymbol();
	
};
 inline void Graphics::drawGraphics(GameStruct::GameFields* gFields, int &tempPosition)
 {
	 system("cls");
	 std::cout << "    1 | 2 | 3  " << std::endl;
	 std::cout << "  -------------" << std::endl;
	 std::cout << "A | " << gFields->fields[0] << " | " << gFields->fields[1] << " | " << gFields->fields[2] << " |" << std::endl;
	 std::cout << "  -------------" << std::endl;
	 std::cout << "B | " << gFields->fields[3] << " | " << gFields->fields[4] << " | " << gFields->fields[5] << " |" << std::endl;
	 std::cout << "  -------------" << std::endl;
	 std::cout << "C | " << gFields->fields[6] << " | " << gFields->fields[7] << " | " << gFields->fields[8] << " |" << std::endl;
	 std::cout << "  -------------" << std::endl;
	 std::cout << "\n\n" << std::endl;
	 std::cout << "A1 = 1, A2 = 2, A3 = 3, B1 = 4, B2 = 5, B3 = 6, C1 = 7, C2 = 8, C3 = 9 " << std::endl;
	 std::cout << "\n\n" << std::endl;
	 std::cout << "Match created: "<<gStruct->matchCreated << std::endl;
	 std::cout << "Match Gegner: " << gStruct->opponentPlayer<< std::endl;
	 std::cout << "Player1: " << gStruct->pSymbol1 << std::endl;
	 std::cout << "Player2: " << gStruct->pSymbol2 << std::endl;
	 std::cout << "Bitte wählen Sie einen Feld aus \nz.B. für B1 tippen Sie 4 ein : ";
	 std::cin >> tempPosition;
 }

 inline void Graphics::drawGraphics(char field[], int& tempPosition, bool drawPattern)
 {
 }

 inline void Graphics::drawStartScreen()
 {
	 while (true)
	 {
		 
		 std::cout << "\nWELCOME TO TIC TAC CONSOLE GAME!"
			 << "\n\npress 's' to Start!"
			 << "\n\nPress 'q' to Quit\n\n" << std::endl;
		 std::cout << "[" << gStruct->gameTypeSelectionArray[0] << "]  AI Player" << std::endl;
		 std::cout << "[" << gStruct->gameTypeSelectionArray[1] << "]  Network Player" << std::endl;
		 std::cout << "[" << gStruct->gameSymbolSelectionArray[0] << "]  X\r" << std::endl;
		 std::cout << "[" << gStruct->gameSymbolSelectionArray[1] << "]  O\r" << std::endl;
		 std::cout << "Match created: " << gStruct->matchCreated << std::endl;
		 std::cout << "Match Gegner: " << gStruct->opponentPlayer << std::endl;
		 std::cout << "Player1: " << gStruct->pSymbol1 << std::endl;
		 std::cout << "Player2: " << gStruct->pSymbol2 << std::endl;
		 char c = _getch();
		 
		 if (c == KEY_ENTER && gStruct->matchCreated == true && gStruct->symbolSelected == true)
		 {
			 break;
		 }
		 else if(gStruct->matchCreated == false)
		 {
			 optionSelector(c);
		 }
		 else if (gStruct->symbolSelected == false) 
		 {
			 optionSelector(c);
		 }
	 }
	 
	
 }

 inline void Graphics::optionSelector(char c)
 {
	 system("cls");
	 if(c == KEY_UP)
	 {
		 if (gStruct->matchCreated == false) {
			 gStruct->gameTypeSelectionArray[0] = gStruct->gSelectorCursor;
			 gStruct->gameTypeSelectionArray[1] = gStruct->blank;
			 gStruct->opponentPlayer = 0;
		 }
		 else if (gStruct->symbolSelected == false)
		 {
			 gStruct->gameSymbolSelectionArray[0] = gStruct->gSelectorCursor;
			 gStruct->gameSymbolSelectionArray[1] = gStruct->blank;
			
		 }
	 }
	 else if (c == KEY_DOWN)
	 {
		 if (gStruct->matchCreated == false) {
			 gStruct->gameTypeSelectionArray[0] = gStruct->blank;
			 gStruct->gameTypeSelectionArray[1] = gStruct->gSelectorCursor;
			 gStruct->opponentPlayer = 1;
		 }
		 else if (gStruct->symbolSelected == false)
		 {
			 gStruct->gameSymbolSelectionArray[0] = gStruct->blank;
			 gStruct->gameSymbolSelectionArray[1] = gStruct->gSelectorCursor;

		 }
	 }
	 else if (c == KEY_ESCAPE || c == KEY_Q)
	 {
		 exit(0);
	 }
 }

 inline void Graphics::drawScoreBox()
 {
 }

 inline void Graphics::selectPlayerSymbol()
 {
 }
