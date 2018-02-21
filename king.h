#pragma once
#include "chess.h"

class king :public chess_piece
{
public:
	king() : chess_piece() {};
	king(const Color& c, const position& p) : chess_piece(c, p) {};
	virtual vector<position> get_available_moves() const;
	virtual string get_name() const;
};