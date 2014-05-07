#ifndef BOARD_H
#define BOARD_H

#include<string>
#include<iostream>
using std::string;
using std::ostream;
class Board
{
private:
	char board[3][3];


public:
	Board();
	void printBoard(ostream& out);
	bool checkDraw() const;
	bool checkWin() const;

};


#endif