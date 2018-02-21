#include <iostream>
//#include "chess.h"
#include "king.h"
#include "knight.h"
#include "bishop.h"
#include "rook.h"
#include "queen.h"
#include "pawn.h"

using namespace std;

int main()
{
	chess_piece* piece = new king(white, "a1");
	vector<position> where_king_can_go = piece->get_available_moves();
	for (int i = 0; i < where_king_can_go.size(); ++i) //prints a2 b1 b2
	{
		cout << where_king_can_go[i] << " ";
	}
	cout << endl;
	piece->move("a2");
	where_king_can_go = piece->get_available_moves();
	for (int i = 0; i < where_king_can_go.size(); ++i) //prints a1 a3 b1 b2 b3
	{
		cout << where_king_can_go[i] << " ";
	}
	cout << endl;
	cout << *piece; //prints “white king on a2”
	delete piece;

	piece = new pawn(white, "d7");
	if (piece->can_move("d5")) //returns false
	{
		cout << "Wrong, white pawns cannot move from 7 to 5" << endl;
	}
	delete piece;

	piece = new pawn(black, "d7");
	if (piece->can_move("d5")) //returns true
	{
		cout << "Correct, black pawns can move from 7 to 5" << endl;
	}
	cout << *piece; //prints “black pawn on a7”
	delete piece;
	
	piece = new knight;
	cin >> *piece;
	vector<position> where_knight_can_go = piece->get_available_moves();
	for (int i = 0; i < where_knight_can_go.size(); ++i)
	{
		cout << where_knight_can_go[i] << " ";
	}
	cout << endl;
	cout << *piece;
	delete piece;

	piece = new queen;
	cin >> *piece;
	vector<position> where_queen_can_go = piece->get_available_moves();
	for (int i = 0; i < where_queen_can_go.size(); ++i)
	{
		cout << where_queen_can_go[i] << " ";
	}
	cout << endl;
	piece->move(where_queen_can_go[0]);
	cout << *piece;
	delete piece;

	piece = new rook;
	cin >> *piece;
	vector<position> where_rook_can_go = piece->get_available_moves();
	for (int i = 0; i < where_rook_can_go.size(); ++i)
	{
		cout << where_rook_can_go[i] << " ";
	}
	cout << endl;
	cout << *piece;
	delete piece;


	piece = new bishop;
	cin >> *piece;
	vector<position> where_bishop_can_go = piece->get_available_moves();
	for (int i = 0; i < where_bishop_can_go.size(); ++i)
	{
		cout << where_bishop_can_go[i] << " ";
		bool can = piece->can_move(where_bishop_can_go[i]);
		if (can)
		{
			cout << " can ";
		}
		piece->move(where_bishop_can_go[i]);
		cout << *piece;
	}
	delete piece;


	system("PAUSE");
	return 0;
}