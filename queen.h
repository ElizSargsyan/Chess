#pragma once
#include "chess.h"

class queen :public chess_piece
{
public:
	queen() : chess_piece() {};
	queen(const Color& c, const position& p) : chess_piece(c, p) {};
	virtual vector<position> get_available_moves() const;
	virtual string get_name() const;
};
