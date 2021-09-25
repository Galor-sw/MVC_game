#pragma once
#include "Controller.h"
#include "Model.h"
#include "View.h"
#include "Game.h"
#include <iostream>
#include <iterator>
#include <map>

class GameController : public Controller
{
public:
	GameController(Model*, View*);
	void play(int game_id);
	void displayEnrolledGames();
	void addGame(int number, string gameName);
	void removeGame(int x);
	std::map<int, string> getEnrolledGames();
private:
	View* _View;
	Model* _Model;
};

