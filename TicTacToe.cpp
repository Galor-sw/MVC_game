#include "TicTacToe.h"

void TicTacToe::computerMove()
{
}

void TicTacToe::playerMove()
{
	int number, check = 0, flag = 0;
	while (!flag)
	{
		cout << "choose number to put your sign in" << endl;
		cin >> number;
		int check = this->checkValidation(number - 1);
		if (check == 0)
			cout << "this place already in use" << endl;
		else flag = 1;
	}
}

bool TicTacToe::checkWinner() { // We'll use _board int
	//int count_TTB = 0;
	//int count_BBT = 0;
	//// first index reperesents our player type. if -1 then player, if 1 then computer else 0 empty field
	//int firstIndex;
	//int firstIndexDiagonalTTB = _board[0][0];
	//int firstIndexDiagonalBTT = _board[_boardSize - 1][0];;
	//int i, j;
	//for (i = 0; i < _boardSize; i++) {
	//	for (j = 0; j < _boardSize; j++) { // Here we check per row
	//		if (j == 0) {
	//			firstIndex = _board[i][j];
	//		}
	//		if (firstIndex != _board[i][j]) {
	//			break;
	//		}
	//	}
	//	if (j == _boardSize) {
	//		//Our winner is type state of current firstIndex
	//		return true;
	//	}
	//	for (j = 0; j < _boardSize; j++) { // Here we check per col
	//		if (j == 0) {
	//			firstIndex = _board[j][i];
	//		}
	//		if (firstIndex != _board[j][i]) {
	//			break;
	//		}
	//	}
	//	if (j == _boardSize) {
	//		//Our winner is type state of current firstIndex
	//		return true;
	//	}
	//	if (firstIndexDiagonalTTB == _board[i][i]) {
	//		count_TTB++;
	//	}
	//	if (firstIndexDiagonalBTT == _board[_boardSize - 1 - i][i]) {
	//		count_BBT++;
	//	}
	//}
	//if (count_BBT == i) {
	//	return true;
	//}
	//else if (count_TTB == i) {
	//	return true;
	//}

	/*-----------------------------------------------------------------------------*/
	string temp = Game::getState();
	//check winner for row
	if (temp[0] == temp[1] && temp[1] == temp[2])
	{
		if (temp[0] == 'X')
			Game::setWinner(1);		//player won
		else Game::setWinner(2);	//computer won
		return true;
	}
	if (temp[3] == temp[4] && temp[4] == temp[5])
	{
		if (temp[3] == 'X')
			Game::setWinner(1);		//player won
		else Game::setWinner(2);	//computer won
		return true;
	}
	if (temp[6] == temp[7] && temp[7] == temp[8])
	{
		if (temp[6] == 'X')
			Game::setWinner(1);		//player won
		else Game::setWinner(2);	//computer won
		return true;
	}

	//check winner for col
	if (temp[0] == temp[3] && temp[3] == temp[6])
	{
		if (temp[0] == 'X')
			Game::setWinner(1);		//player won
		else Game::setWinner(2);		//computer won
		return true;
	}
	if (temp[1] == temp[4] && temp[4] == temp[7])
	{
		if (temp[1] == 'X')
			Game::setWinner(1);		//player won
		else Game::setWinner(2);		//computer won
		return true;
	}
	if (temp[2] == temp[5] && temp[5] == temp[8])
	{
		if (temp[2] == 'X')
			Game::setWinner(1);		//player won
		else Game::setWinner(2);		//computer won
		return true;
	}
	// check for slide
	if (temp[0] == temp[4] && temp[4] == temp[8])
	{
		if (temp[0] == 'X')
			Game::setWinner(1);		//player won
		else Game::setWinner(2);		//computer won
		return true;
	}
	if (temp[2] == temp[4] && temp[4] == temp[6])
	{
		if (temp[2] == 'X')
			Game::setWinner(1);		//player won
		else Game::setWinner(2);		//computer won
		return true;
	}
	return false;
}
bool TicTacToe::checkValidation(int x)
{
	string temp = Game::getState();
	if (temp[x] == 'X' || temp[x] == 'O')
		return false;

	else
	{
		temp[x] = 'X';
		Game::setState(temp);
	}
	return true;
}
