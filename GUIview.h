#include "View.h"
#include "Game.h"

class GUIview : public View
{
	GUIview() = delete; //for now this fiture is unavailible
	void printGameStatus(Game*) {};
	void displayEnrolledGames(std::map<int, Game&>) {};
	void printWinner(int winner) {};
	void printTie() {};
};

