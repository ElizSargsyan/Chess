#pragma once
#include "chess.h"

class bishop :public chess_piece
{
public:
	bishop() : chess_piece() {};
	bishop(const Color& c, const position& p) : chess_piece(c, p) {};
	virtual vector<position> get_available_moves() const;
	virtual string get_name() const;
};
