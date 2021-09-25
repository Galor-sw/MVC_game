#include "ConsoleView.h"

void ConsoleView::printGameStatus(Game* game)
{
	int boardSize = game->getBoard();
	string state = game->getState();
	int index = 0;
	for (int i = 0; i < boardSize; i++)
	{
		for (int j = 0; j < boardSize; j++)
		{
			cout << "  " << state[index++] << "  ";
			if (j < boardSize - 1)
				cout << "|";
		}
		cout << endl;
	}
}
void ConsoleView::displayEnrolledGames(std::map<int, string> MAP)
{
	cout << "Game list:" << endl;
	std::map<int, string>::const_iterator it;
	for (it = MAP.begin(); it != MAP.end(); it++)
		cout << it->first << " - " << it->second << endl;
}

void ConsoleView::printWinner(int winner) {
	if (winner == 1)
		cout << "congratulations! You're the winner!!" << endl;
	if (winner == 2)
		cout << "oh no! it look like the computer beated you, you should try again!" << endl;
}

void ConsoleView::printTie()
{
	cout << "its a tie! good job, you should win the next game!" << endl;
}