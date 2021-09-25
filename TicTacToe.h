#pragma once
#include "Game.h"

class TicTacToe : public Game
{
public:
	TicTacToe(string state = "123456789", int board = 3) : Game(state, board) {};
	virtual void computerMove();
	void playerMove();
	bool checkWinner();
	bool checkValidation(int x);
};
