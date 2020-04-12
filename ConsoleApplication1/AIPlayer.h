#pragma once
#include "Player.h"
class AIPlayer : public Player
{
private:
	

public:
	AIPlayer(const char & pSymbol) :Player(pSymbol)
	{
		
	};
	~AIPlayer() {};
	void makeMove();
};

inline void AIPlayer::makeMove()
{
}