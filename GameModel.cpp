#include "GameModel.h"

Game* GameModel::getGame(int game_id)
{
	if (game_id == 1) {
		return new TicTacToe_Normal();
	}
	else if (game_id == 2)
		return new TicTacToe_Hard();

	return nullptr;
}

GameModel::GameModel()
{
	_Games.insert({ 1, "TicTacToe - Noraml" });
	_Games.insert({ 2, "TicTacToe - Hard" });
}

void GameModel::addGame(int number, string x)
{
	_Games.insert({ number, x });
}

void GameModel::removeGame(int x)
{
	_Games.erase(x);
}

