#include "king.h"

string king::get_name() const
{
	string s = "king";
	return s;
}

vector<position> king::get_available_moves() const
{
	vector<position> av;
	
	if (pos.first() >= 2)
	{
		position p1(pos.first() - 1, pos.second());
		av.push_back(p1);
		if (pos.second() >= 2)
		{
			position p3(pos.first() - 1, pos.second() - 1);
			av.push_back(p3);
		}
		if (pos.second() <= 7)
		{
			position p4(pos.first() - 1, pos.second() + 1);
			av.push_back(p4);
		}
	}
	if (pos.first() <= 7)
	{
		position p2(pos.first() + 1, pos.second());
		av.push_back(p2);
		if (pos.second() >= 2)
		{
			position p3(pos.first() + 1, pos.second() - 1);
			av.push_back(p3);
		}
		if (pos.second() <= 7)
		{
			position p4(pos.first() + 1, pos.second() + 1);
			av.push_back(p4);
		}
	}
	if (pos.second() >= 2)
	{
		position p3(pos.first(), pos.second() - 1);
		av.push_back(p3);

	}
	if (pos.second() <= 7)
	{
		position p4(pos.first(), pos.second() + 1);
		av.push_back(p4);
	}
	return  av;
}