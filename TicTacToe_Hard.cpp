#include "TicTacToe_Hard.h"

void TicTacToe_Hard::computerMove()
{
	int board = Game::getBoard();
	string temp = Game::getState();
	int i, j, z;
	int iteration;
	if (temp[((board * board) / 2)] != 'X' && temp[((board * board) / 2)] != 'O') {
		temp[((board * board) / 2)] = 'O';
		Game::setState(temp);
		return;
	}
	if (temp[0] == temp[4]) { // THIS FINDS ms amount of X in DIAGONAL
		if (temp[8] != 'X' && temp[8] != 'O') {
			temp[8] = 'O';
			Game::setState(temp);
			return;
		}
	}
	if (temp[0] == temp[8]) { // THIS FINDS ms amount of X in DIAGONAL
		if (temp[4] != 'X' && temp[4] != 'O') {
			temp[4] = 'O';
			Game::setState(temp);
			return;
		}
	}
	if (temp[4] == temp[8]) {
		if (temp[0] != 'X' && temp[0] != 'O') {
			temp[0] = 'O';
			Game::setState(temp);
			return;
		}
	}
	for (i = 0, iteration = 0, j = 1, z = 2; iteration < board; i += 3, j += 3, z += 3, iteration++) { // THIS LOOP FINDS ms amount of X in HORIZONTAL
		if (temp[i] == temp[j]) {
			if (temp[z] != 'X' && temp[z] != 'O') {
				temp[z] = 'O';
				Game::setState(temp);
				return;
			}
		}
		if (temp[i] == temp[z]) {
			if (temp[j] != 'X' && temp[j] != 'O') {
				temp[j] = 'O';
				Game::setState(temp);
				return;
			}
		}
		if (temp[j] == temp[z]) {
			if (temp[i] != 'X' && temp[i] != 'O') {
				temp[i] = 'O';
				Game::setState(temp);
				return;
			}
		}
	}
	for (i = 0; i < board; i++) // THIS LOOP FINDS ms amount of X in Vertical
	{
		if (temp[i] == temp[i + 3]) {
			if (temp[i + 6] != 'X' && temp[i + 6] != 'O') {
				temp[i + 6] = 'O';
				Game::setState(temp);
				return;
			}
		}
		if (temp[i] == temp[i + 6]) {
			if (temp[i + 3] != 'X' && temp[i + 3] != 'O') {
				temp[i + 3] = 'O';
				Game::setState(temp);
				return;
			}
		}
		if (temp[i + 3] == temp[i + 6]) {
			if (temp[i] != 'X' && temp[i] != 'O') {
				temp[i] = 'O';
				Game::setState(temp);
				return;
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (temp[i] != 'X' && temp[i] != 'O') {
			temp[i] = 'O';
			Game::setState(temp);
			break;
		}
	}
}