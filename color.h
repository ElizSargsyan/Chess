#pragma once
#include <iostream>
#include <string>

using namespace std; 

enum color{black,white};

class Color
{
private:
	color clr;
public:
	Color(const color& col) : clr(col) {};
	Color() {};
	color get_clr() const;
	istream& read(istream&);
	ostream& write(ostream&) const;
};

istream& operator>>(istream&, Color&);
ostream& operator<<(ostream&, const Color&);
