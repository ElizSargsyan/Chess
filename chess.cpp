#include "chess.h"

void chess_piece::move(const position& p)
{
	pos = p;
}

bool chess_piece::can_move(const position& p) const
{
	vector<position> vec = this->get_available_moves();
	if (find(vec.begin(), vec.end(), p) != vec.end())
	{
		return true;
	}
	return false;
}

position chess_piece::get_position() const
{
	return pos;
}

Color chess_piece::get_color() const
{
	return clr;
}

chess_piece::chess_piece(const Color& c, const position& p)
{
	clr = c;
	pos = p;
}

istream& chess_piece::read(istream& in)
{

	in >> pos >> clr;
	return in;
}

ostream& chess_piece::write(ostream& out) const
{
	string name = (*this).get_name();
	out << clr << " " << name << " on " << pos << endl;
	return out;
}

ostream& operator<<(ostream& out, const chess_piece& ch)
{
	ch.write(out);
	return out;
}

istream& operator>>(istream& in,chess_piece& ch)
{
	ch.read(in);
	return in;
}