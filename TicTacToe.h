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
	void TicTacToe::reset(TicTacToe game, bool &done);
	void TicTacToe::move(TicTacToe Player, char posArr[][3]);
	void TicTacToe::print(TicTacToe Board);
	~TicTacToe();
};