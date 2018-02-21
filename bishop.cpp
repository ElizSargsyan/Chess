#include "bishop.h"

string bishop::get_name() const
{
	string s = "bishop";
	return s;
}

vector<position> bishop::get_available_moves() const
{
	vector<position> av;

	int p1 = pos.first(),
		p2_1 = pos.second(),
		p2_2 = pos.second();

	while (p1 < 8)
	{
		++p1;
		if (p2_1 > 1)
		{
			--p2_1;
			av.push_back(position(p1, p2_1));
		}
		if (p2_2 < 8)
		{
			++p2_2;
			av.push_back(position(p1, p2_2));
		}
	}


	p1 = pos.first(),
		p2_1 = pos.second(),
		p2_2 = pos.second();

	while (p1 > 1)
	{
		p1--;
		if (p2_1 > 1)
		{
			--p2_1;
			av.push_back(position(p1, p2_1));
		}
		if (p2_2 < 8)
		{
			++p2_2;
			av.push_back(position(p1, p2_2));
		}
	}

	return  av;
}