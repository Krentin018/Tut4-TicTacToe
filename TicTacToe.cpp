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
