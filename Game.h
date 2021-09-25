#pragma once
#include <iostream>
using namespace std;
//this class is abstract

class Game {
public:
	Game(string state = "", int board = 0, int winner = 0) { _state = state, _boardSize = board, _winner = winner; };
public:
	int getBoard() { return _boardSize; };
	string getState() { return _state; };
	int getWinner() { return _winner; };

	virtual void playerMove() = 0;
	virtual void computerMove() = 0;
	virtual bool checkValidation(int) = 0;
	virtual bool checkWinner() = 0; //if there winner return 1
	void setState(string newStr) { _state = newStr; };
	void setWinner(int winner) { _winner = winner; };
protected:
	int _winner;
	string _state;
	int _boardSize;
};
