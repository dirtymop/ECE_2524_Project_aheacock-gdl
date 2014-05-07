#include "Board.h"

using std::endl;

Board::Board()
{


	board[0][0] = '1';
	board[0][1] = '2';
	board[0][2] = '3';
	board[1][0] = '4';
	board[1][1] = '5';
	board[1][2] = '6';
	board[2][0] = '7';
	board[2][1] = '8';
	board[2][2] = '9';
}

void Board::printBoard(ostream& out)
{

	out << "     |     |     " << endl;
	out << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;

	out << "_____|_____|_____" << endl;
	out << "     |     |     " << endl;

	out << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;

	out << "_____|_____|_____" << endl;
	out << "     |     |     " << endl;

	out << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
	
	out << "     |     |     " << endl << endl;
}

bool Board::checkWin() const
{
	bool returned = false;
	if (board[0][0] == board[0][1] && board[0][1] == board[0][2])

		returned = true;
	else if (board[4] == board[5] && board[5] == board[6])

		return 1;
	else if (board[7] == board[8] && board[8] == board[9])

		return 1;
	else if (board[1] == board[4] && board[4] == board[7])

		return 1;
	else if (board[2] == board[5] && board[5] == board[8])

		return 1;
	else if (board[3] == board[6] && board[6] == board[9])

		return 1;
	else if (board[1] == board[5] && board[5] == board[9])

		return 1;
	else if (board[3] == board[5] && board[5] == board[7])

		return 1;
	else
		return false;
	return returned;
}

bool Board::checkDraw() const
{
	bool returned = false;
	if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3'
		&& board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6'
		&& board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
	{
		returned = true;
	}
	return returned;
}