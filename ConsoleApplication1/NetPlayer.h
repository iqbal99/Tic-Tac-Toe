#pragma once
#include "Player.h"
class NetPlayer : public Player
{
private:
public:
	NetPlayer(const char& pSymbol) :Player(pSymbol)
	{

	};
	~NetPlayer() {};
	void makeMove();
};
inline void NetPlayer::makeMove()
{
}
