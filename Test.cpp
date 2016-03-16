#include<iostream>
#include"TicTacToe.h"
using namespace std;

int main()
{
	bool done = false;
	TicTacToe Game;

	Game.start();

	while (!done)
	{
		Game.reset(Game, done);
	}


	system("PAUSE");
	return 0;
}