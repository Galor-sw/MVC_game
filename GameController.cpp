#include "GameController.h"

GameController::GameController(Model* model, View* view)
{
	_View = view;
	_Model = model;
}

void GameController::play(int game_id)
{
	Game* game = _Model->getGame(game_id); //factory
	int boardSize = game->getBoard();
	int i = 0;
	while (!game->checkWinner() || i >= boardSize * boardSize) { // while there is no winner
		_View->printGameStatus(game);
		game->playerMove();
		i++;
		if (game->checkWinner())
			break;
		if (i >= boardSize * boardSize)
			break;
		game->computerMove();
		i++;
	}
	if (game->checkWinner())
		_View->printWinner(game->getWinner());
	else _View->printTie();
}
void GameController::displayEnrolledGames() {
	_View->displayEnrolledGames(_Model->getEnrolledGames());
}

void GameController::addGame(int number, string gameName)
{
	_Model->addGame(number, gameName);
}

void GameController::removeGame(int x)
{
	_Model->removeGame(x);
}

std::map<int, string> GameController::getEnrolledGames()
{
	return _Model->getEnrolledGames();
}
