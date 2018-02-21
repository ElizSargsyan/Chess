#ifndef CHESSH
#define CHESSH
#include "position.h"
#include "color.h"
#include <vector>


class chess_piece
{
protected:
	position pos;
	Color clr;
public:
	position get_position() const;
	Color get_color() const;
	chess_piece(const Color&, const position&); 
	chess_piece() {};
	istream& read(istream&);
	ostream& write(ostream&) const;
	virtual vector<position> get_available_moves() const = 0;
	virtual string get_name() const = 0;
	bool can_move(const position&) const;
	void move(const position&);

};

istream& operator>>(istream& in, chess_piece&);
ostream& operator<<(ostream& out, const chess_piece&);
#endif