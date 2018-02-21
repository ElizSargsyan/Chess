#include "color.h"

ostream& operator<<(ostream& out, const Color& col)
{
	col.write(out);
	return out;
}

istream& operator>>(istream& in, Color& col)
{
	col.read(in);
	return in;
}

ostream& Color::write(ostream& out) const
{
	if (clr == white)
		out << "white";
	if (clr == black)
		out << "black";
	return out;
}

istream& Color::read(istream& in)
{
	string input;
	in >> input;
	if (input == "white")
		clr = white;
	if (input == "black")
		clr = black;
	return in;
}

color Color::get_clr() const
{
	return clr;
}