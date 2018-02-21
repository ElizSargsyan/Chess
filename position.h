#pragma once
#include <string>
#include <iostream>
using namespace std;


class position
{
private:
	int pos1;
	int pos2;
public:
	int first() const;
	int second() const;
	position() : pos1(0),pos2(0) {};
	position(int pos1, int pos2) : pos1(pos1), pos2(pos2) {};
	position(const char*);
	bool operator==(const position&) const;
	istream& read(istream&);
	ostream& write(ostream& out) const;
};

istream& operator>>(istream&,position&);
ostream& operator<<(ostream&, const position&);