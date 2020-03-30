#include "app.h"
void app::drawGraphics(char field[])
{
	std::cout << "    1 | 2 | 3  " << std::endl;
	std::cout << "  -------------" << std::endl;
	std::cout << "A | " << field[0] << " | " << field[1] << " | " << field[2] << " |" << std::endl;
	std::cout << "  -------------" << std::endl;
	std::cout << "B | " << field[3] << " | " << field[4] << " | " << field[5] << " |" << std::endl;
	std::cout << "  -------------" << std::endl;
	std::cout << "C | " << field[6] << " | " << field[7] << " | " << field[8] << " |" << std::endl;
	std::cout << "  -------------" << std::endl;
	std::cout << "\n\n" << std::endl;
	std::cout << "A1 = 1, A2 = 2, A3 = 3, B1 = 4, B2 = 5, B3 = 6, C1 = 7, C2 = 8, C3 = 9 " << std::endl;
	std::cout << "\n\n" << std::endl;
	std::cout << "Bitte wählen Sie einen Feld aus \nz.B. für B1 tippen Sie 4 ein : ";
	std::cin >> tempPosition;
}

void app::startScreen()
{
	system("cls");
	cout << "\nWELCOME TO TIC TAC CONSOLE GAME!"
		<< "\n\npress 's' to Start!"
		<< "\n\nPress 'q' to Quit\n\n"<< endl;
}

void app::initGame()
{
	GameChar gc;
	for (int i = 0; i <= sizeof(field); i++)
	{
		
		field[i] = gc.blank;
	}
	startScreen();
	drawGraphics(field);
}

void app::makeMove(char gc, int position)
{
	system("cls");
	startScreen();
	fillField(gc, position);
	drawGraphics(field);
}

void app::fillField(char gc, int position)
{
	field[position-1] = gc;
}
