#include "Model.h"
#include "Game.h"
#include "TicTacToe_Normal.h"
#include "TicTacToe_Hard.h"
#include <iostream>
using namespace std;
class GameModel : public Model
{
public:
	GameModel();
	void addGame(int number, string x);
	void removeGame(int x);
	std::map<int, string> getEnrolledGames() { return _Games; };
	Game* getGame(int game_id);
	//virtual int getBoard(int game_id);
	//virtual string getState(int game_id);
private:
	std::map<int, string> _Games;
};