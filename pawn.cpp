#include "pawn.h"

string pawn::get_name() const
{
	string s = "pawn";
	return s;
}

vector<position> pawn::get_available_moves() const
{
	vector<position> av;

	if (clr.get_clr() == white)
	{
		if (pos.second() == 2)
			av.push_back(position(pos.first(), 4));
		if (pos.second() <= 7)
			av.push_back(position(pos.first(), pos.second() + 1));
	}
	if (clr.get_clr() == black)
	{
		if (pos.second() == 7)
			av.push_back(position(pos.first(), 5));
		if(pos.second()-1>=2)
			av.push_back(position(pos.first(), pos.second() - 1));
	}

	return  av;
}