#pragma once
#include "chess.h"

class pawn :public chess_piece
{
public:
	pawn() : chess_piece() {};
	pawn(const Color& c, const position& p) : chess_piece(c, p) {};
	virtual vector<position> get_available_moves() const;
	virtual string get_name() const;
};