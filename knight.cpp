#include "knight.h"

string knight::get_name() const
{
	string s = "knight";
	return s;
}

vector<position> knight::get_available_moves() const
{
	vector<position> av;

	int p1 = pos.first(), p2 = pos.second();

	if (p1 < 7)
	{
		if (p2 < 8)
		{
			av.push_back(position(p1 + 2, p2 + 1));
		}
		if (p2 > 1)
		{
			av.push_back(position(p1 + 2, p2 - 1));
		}
	}

	if (p1 > 2)
	{
		if (p2 < 8)
		{
			av.push_back(position(p1 - 2, p2 + 1));
		}
		if (p2 > 1)
		{
			av.push_back(position(p1 - 2, p2 - 1));
		}
	}

	if (p2 < 7)
	{
		if (p1 < 8)
		{
			av.push_back(position(p1 + 1, p2 + 2));
		}
		if (p1 > 1)
		{
			av.push_back(position(p1 - 1, p2 + 2));
		}
	}

	if (p2 > 2)
	{
		if (p1 < 8)
		{
			av.push_back(position(p1 + 1, p2 - 2));
		}
		if (p1 > 1)
		{
			av.push_back(position(p1 - 1, p2 - 2));
		}
	}
	
	return  av;
}