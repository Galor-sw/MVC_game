#pragma once
#include <iostream>
#include "Game.h"
#include <map>
using namespace std;

//this class is interface
class Model {
public:
	virtual void addGame(int, string) = 0;
	virtual void removeGame(int) = 0;
	virtual Game* getGame(int game_id) = 0;
	//virtual int getBoard(int game_id) = 0;
	//virtual string getState(int game_id) = 0;
	virtual std::map<int, string> getEnrolledGames() = 0;
};
