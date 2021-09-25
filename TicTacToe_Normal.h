#include "Game.h"
#include "TicTacToe.h"

class TicTacToe_Normal : public TicTacToe
{
public:
	TicTacToe_Normal() : TicTacToe() {};
	void computerMove();
};

