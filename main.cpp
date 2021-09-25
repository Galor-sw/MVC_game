#include "Controller.h"
#include "GameController.h"
#include "Model.h"
#include "GameModel.h"
#include "View.h"
#include "ConsoleView.h"
#include <iostream>
using namespace std;

int main()
{
	View* cnslView = new ConsoleView();
	Model* gameModel = new GameModel();
	Controller* controller = new GameController(gameModel, cnslView);
	controller->displayEnrolledGames();
	//controller->play(1);
	controller->play(2);
	return 0;
}