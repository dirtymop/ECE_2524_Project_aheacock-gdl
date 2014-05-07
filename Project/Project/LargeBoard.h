#ifndef LARGEBOARD_H
#define LARGEBOARD_H

#include<string>
#include<iostream>
#include "Board.h"
using std::string;
using std::ostream;
class LargeBoard
{
private:
	Board board[3][3];


public:
	LargeBoard();
	void printBoard(ostream& out);
	bool checkDraw() const;
	char checkWinner() const;


};


#endif