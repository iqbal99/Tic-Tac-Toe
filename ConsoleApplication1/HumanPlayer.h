
#include "Player.h"
class HumanPlayer : public Player
{
private:
public:
	 HumanPlayer(const char& pSymbol) :Player(pSymbol)
	{
		
	};
	~HumanPlayer() {};
	void makeMove();
};
inline void HumanPlayer::makeMove()
{
}
