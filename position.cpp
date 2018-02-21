#include "position.h"

bool position::operator==(const position& p) const
{
	if (p.pos1 == pos1 && p.pos2 == pos2)
	{
		return true;
	}
	return false;
}

ostream& operator<<(ostream& out, const position& pos)
{
	pos.write(out);
	return out;
}

ostream& position::write(ostream& out) const
{
	out << (char)(pos1  + 'a' - 1) << pos2 ;
	return out;
}

istream& operator>>(istream& in, position& a)
{
	a.read(in);
	return in;
}

istream& position::read(istream& in)
{
	string input;
	in >> input;
	pos1 = input[0] - 'a' + 1;
	pos2 = input[1] - '0';
	return in;
}

position::position(const char* s)
{
	pos1 = s[0] - 'a' + 1;
	pos2 = s[1] - '0';
}


int position::first() const
{
	return pos1;
}

int position::second() const
{
	return pos2;
}