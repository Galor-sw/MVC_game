#include "TicTacToe_Normal.h"

void TicTacToe_Normal::computerMove()
{
	string temp = Game::getState();
	int i = 0;
	for (i; i < 9; i++)
	{
		if (temp[i] != 'X' && temp[i] != 'O') {
			temp[i] = 'O';
			Game::setState(temp);
			break;
		}
	}
}
