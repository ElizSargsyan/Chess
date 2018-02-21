#include "rook.h"

string rook::get_name() const
{
	string s = "rook";
	return s;
}

vector<position> rook::get_available_moves() const
{
	vector<position> av;
	
	int p1 = pos.first(), p2 = pos.second();

	while (p1 > 1)
	{
		--p1;
		av.push_back(position(p1, pos.second()));
	}
	while (p2 > 1)
	{
		--p2;
		av.push_back(position(pos.first(), p2));
	}

	p1 = pos.first(), p2 = pos.second();

	while (p1 < 8)
	{
		++p1;
		av.push_back(position(p1, pos.second()));
	}
	while (p2 < 8)
	{
		++p2;
		av.push_back(position(pos.first(), p2));
	}

	return  av;
}