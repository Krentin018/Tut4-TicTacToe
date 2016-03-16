#pragma once
class TicTacToe
{
private:

	int xPos1;
	int yPos1;
	int xPos2;
	int yPos2;
	int player;
	char decision;

public:

	TicTacToe();
	TicTacToe(int x1, int y1, int x2, int y2, int p, char dec);

	~TicTacToe();
};