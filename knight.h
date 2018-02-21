#pragma once
#include "chess.h"

class knight :public chess_piece
{
public:
	knight() : chess_piece() {};
	knight(const Color& c, const position& p) : chess_piece(c, p) {};
	virtual vector<position> get_available_moves() const;
	virtual string get_name() const;
};
