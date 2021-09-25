#pragma once
//this class is interface
#include <iostream>
using namespace std;

class Controller {
public:
	virtual void play(int game_id) = 0;
	virtual void displayEnrolledGames() = 0;
	virtual void addGame(int, string) = 0;
	virtual void removeGame(int) = 0;
};