#pragma once
#include <vector>

enum piece_color { red, black, white, invalid_color, colorless };
string colorNumtoStr(int n);
int colorStrtoNum(const std::string & s);

struct game_piece {
	piece_color color;
	string & pieceName;
	string &printedHow;
};

