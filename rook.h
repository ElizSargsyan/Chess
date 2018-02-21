#pragma once
#include "chess.h"

class rook :public chess_piece
{
public:
	rook() : chess_piece() {};
	rook(const Color& c, const position& p) : chess_piece(c, p) {};
	virtual vector<position> get_available_moves() const;
	virtual string get_name() const;
};
