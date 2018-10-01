#pragma once
#include <vector>
#include "Lab2header2.h"

enum readingTxt { success, boardDimensionsUnextractable, lineUnreadable};
enum readingBoard {success, unsuccessful};
int readDimensions(std::ifstream & s, unsigned len, unsigned wid);
int readBoard(std::ifstream & s, vector<game_piece> & v, unsigned x, unsigned y);

