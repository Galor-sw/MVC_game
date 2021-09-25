#pragma once
#include "View.h"
#include "Game.h"

class ConsoleView : public View
{
public:
	ConsoleView() {};
	void printGameStatus(Game* game);
	void displayEnrolledGames(std::map<int, string> MAP);
	void printWinner(int winner);
	void printTie();
};

