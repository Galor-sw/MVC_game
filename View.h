#pragma once
#include <iostream>
#include "Game.h"
#include <map>
using namespace std;
//this class is interface
class View {
public:
	virtual void printGameStatus(Game*) = 0;
	virtual void displayEnrolledGames(std::map<int, string>) = 0;
	virtual void printWinner(int winner) = 0;
	virtual void printTie() = 0;
};