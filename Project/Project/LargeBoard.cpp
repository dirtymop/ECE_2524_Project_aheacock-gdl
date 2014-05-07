#include "LargeBoard.h"


LargeBoard::LargeBoard()
{
	
}



char LargeBoard::checkWinner() const
{
	char returned = ' ';
	if (board[0][0].checkWinner() == board[0][1].checkWinner() && board[0][1].checkWinner() == board[0][2].checkWinner())

		returned = board[0][0].checkWinner();
	else if (board[1][0].checkWinner() == board[1][1].checkWinner() && board[1][1].checkWinner() == board[1][2].checkWinner())

		returned = board[1][0].checkWinner();
	else if (board[2][0].checkWinner() == board[2][1].checkWinner() && board[2][1].checkWinner() == board[1][2].checkWinner())

		returned = board[2][0].checkWinner();
	else if (board[0][0].checkWinner() == board[1][0].checkWinner() && board[1][0].checkWinner() == board[2][0].checkWinner())

		returned = board[0][0].checkWinner();
	else if (board[0][1].checkWinner() == board[1][1].checkWinner() && board[1][1].checkWinner() == board[2][1].checkWinner())

		returned = board[0][1].checkWinner();
	else if (board[0][2].checkWinner() == board[1][2].checkWinner() && board[1][2].checkWinner() == board[2][2].checkWinner())

		returned = board[0][2].checkWinner();
	else if (board[0][0].checkWinner() == board[1][1].checkWinner() && board[1][1].checkWinner() == board[2][2].checkWinner())

		returned = board[0][0].checkWinner();
	else if (board[0][2].checkWinner() == board[1][1].checkWinner() && board[1][1].checkWinner() == board[2][0].checkWinner())

		returned = board[0][2].checkWinner();
	return returned;
}

bool LargeBoard::checkDraw() const
{
	bool returned = false;
	if (   board[0][0].checkWinner() != ' ' && board[0][1].checkWinner() != ' ' && board[0][2].checkWinner() != ' '
		&& board[1][0].checkWinner() != ' ' && board[1][1].checkWinner() != ' ' && board[1][2].checkWinner() != ' '
		&& board[2][0].checkWinner() != ' ' && board[2][1].checkWinner() != ' ' && board[2][2].checkWinner() != ' '
		&& checkWinner() == ' ')
	{
		returned = true;
	}
	return returned;
}