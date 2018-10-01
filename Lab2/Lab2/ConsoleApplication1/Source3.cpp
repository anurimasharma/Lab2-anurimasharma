#include "stdafx.h"
#include "Lab2header3.h"
#include <iostream>  
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
}


int readDimensions(istream & s, unsigned len, unsigned wid) {

	string line;
	if (getline(s, line)) {

		istringstream iss(line);
		if (iss >> wid) {
			if (iss >> len) {
				return success;
			}
			else {
				return boardDimensionsUnextractable;
			}
		}
		else {
			return boardDimensionsUnextractable;
		}
	}
	else {
		return lineUnreadable;
	}
}

int readBoard(std::ifstream & s, vector<game_piece> & v, unsigned x, unsigned y)
{
	//If five values were successfully extracted(the extraction operator will return false 
	//if it cannot extract a value), the function should then(1) convert the first string into 
	//an enumeration value for the game piece color(by calling the function you wrote earlier to 
	//do that) and (2) compare the values of the horizontal and vertical coordinates of the game 
	//piece to the horizontal and vertical dimensions of the game board.If the function was not 
	//able to extract five values from that line, or if the game piece color is invalid, or if 
	//either the horizontal or vertical coordinate is greater than or equal to the corresponding
	//dimension of the game board, then the function should simply skip over that line and continue 
	//to process subsequent lines.

	string line;
	string color;
	string piece;
	string display;
	if (getline(s, line)) {
		istringstream iss(line);
		if (iss >> color) {
			if (iss >> piece) {
				if (iss >> display) {
					if (iss >> x) {
						if (iss >> y) {

						}
					}
				}
			}
		}

	}


}
