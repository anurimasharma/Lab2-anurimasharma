#include "stdafx.h"
#include "Lab2header2.h"
#include <iostream>  


using namespace std;

int main()
{
}

string colorNumtoStr(int n)
{
	char * t = "b";
	if (n = 0) {
		t = "red";
		return t;
	}
	if (n = 1) {
		t = "black";
		return t;
	}
	if (n = 2) {
		t = "white";
		return t;
	}
	if (n = 3) {
		t = "invalid color";
		return t;
	}
	if (n = 4) {
		t = "colorless";
		return t;
	}
}

int colorStrtoNum(const std::string & s)
{
	int enumInt;
	if (s == "red") {
		enumInt = red;
		return enumInt;
	}
	if (s == "black") {
		enumInt = black;
		return enumInt;
	}
	if (s == "white") {
		enumInt = white;
		return enumInt;
	}
	if (s == " ") {
		enumInt = colorless;
		return enumInt;
	}

	else {
		enumInt = invalid_color;
		return enumInt;
	}
}