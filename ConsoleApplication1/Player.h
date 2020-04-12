#pragma once
#include "includes.h"

class Player
{ 
private:

private:
public:
	char pSymbol;
	Player() {};
	Player(const char &pSymbol)
	{
		this->pSymbol = pSymbol;
	};
	~Player() {};
	virtual
		void makeMove();
	
};
inline void Player::makeMove()
{
	
}

