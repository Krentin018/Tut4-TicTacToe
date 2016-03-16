#include "TicTacToe.h"
#include<iostream>
using namespace std;
char posArr[3][3];

TicTacToe::TicTacToe(){}

TicTacToe::TicTacToe(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int p = 1, char dec = 'n')
{
	//default constructor
	xPos1 = x1;
	yPos1 = y1;
	xPos2 = x2;
	yPos2 = y2;
	player = p;
	decision = dec;
}

void TicTacToe::reset(TicTacToe game, bool &done)
{
	cout << "Do you wish to start a new game (y/n) ?" << endl;
	cin >> game.decision;      
	cout << "\n*****************0*******************************************" << endl;
	if (game.decision == 'y')
	{
		cout << "\n\n\t\tCollumns\n" << endl;
		cout << "          0  |1 | 2" << endl << endl;
		cout << "        0  __|__|__" << endl;
		cout << "Rows    1  __|__|__" << endl;
		cout << "        2    |  |  " << endl;
		cout << "\n\n" << endl;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				posArr[i][j] = '_';
			}
		}

		game.player = 1;
	//	game.move(game, posArr);
	}
	else if (game.decision == 'n')                     //exit if no -- with goodbye message
	{

		cout << " \n Thank You For Playing" << endl;
		done = true;
	}
	else
	{                                                 //check for invalid inputs
		cout << "\n\n Invalid Entry. \n\n\n\n ";
		done = true;
	}


}