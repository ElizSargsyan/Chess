#include "queen.h"

string queen::get_name() const
{
	string s = "queen";
	return s;
}

vector<position> queen::get_available_moves() const
{
	vector<position> av;

	int p1 = pos.first(),
		p2_1 = pos.second(),
		p2_2 = pos.second();

	while (p1 < 8)
	{
		++p1;
		av.push_back(position(p1, pos.second()));
		if (p2_1 > 1)
		{
			--p2_1;
			av.push_back(position(p1, p2_1 ));
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
		av.push_back(position(p1, pos.second()));
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

	int p2 = pos.second();
	while (p2 > 1)
	{
		--p2;
		av.push_back(position(pos.first(), p2));
	}

	p2 = pos.second();
	while (p2 < 8)
	{
		++p2;
		av.push_back(position(pos.first(), p2));
	}

	return  av;
}