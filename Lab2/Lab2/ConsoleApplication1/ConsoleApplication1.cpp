// Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lab2header1.h"
#include <algorithm>
#include <iostream>  
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{


	/*
	vector<string> empty;
	vector<int> digits;
	int h;

	// If the user does or does not use the right number of inputs, the usage function is called

	if (argc != numberOfInputs) {
		usageFunction(argv[programName]);
		return ranIncorrectly;
	}

	//This function parses through the .txt file

	int result = parsingInput(empty, argv[fileName]);

	//If the file could not open correctly, the usage function is called again
	if (result != success)
	{
		usageFunction(argv[programName]);
		return result;
	}

	//If the .txt file does open...
	else {
		istringstream iss(); 

		//Iterate thought the vector<string>
		for (int i = 0; i < empty.size(); ++i)
		{
			string holder = empty[i];
			bool stringState = false;
			//Iterate each space of the specific string we are looking at
			for (int f = 0; f < holder.size(); ++f) {

				//If it is a digit it is saved for later; if it is a character it is printed
				if (isdigit(holder[f])) {

					continue;
				}
				else {
					cout << holder << endl;
					stringState = true;
					break;
				}
			}
			if (stringState == false) {
				istringstream iss(holder);
				int temp;
				iss >> temp;
				digits.push_back(temp);
			}
		}

		//The digits are printed out
		for (int l = 0; l < digits.size(); ++l)
		{
			cout << digits[l] << endl;
		}
		return success;
	}
	*/
}

int usageFunction(const string & s)
{
	cout << "Usage: Lab 2 -" << endl;
	cout << "Program Name: " << s << "; arg1: file name (.txt)" << endl;
	cout << "To run the program, type in the program name, hit space, and the type in the file name." << endl;
	cout << "Make sure the file is a .txt file. A non zero return value indicates and error, and each" << endl;
	cout << "error has a unique int output associates with it. Check Lab2hearder1.h to see what each error means." << endl;
	return ranIncorrectly;
}

int parsingInput(vector<string> & blank, char * t)
{
	string n;
	ifstream inputFile;
	inputFile.open(t);
	if (inputFile.is_open()) {
		while (inputFile >> n)
		{
			blank.push_back(n);
		}
		return success;
	}
	else {
		return fileUnopenable;
	}
}

string convertToLower(const string & s)
{
	// Used this as a reference: https://stackoverflow.com/questions/313970/how-to-convert-stdstring-to-lower-case
	/*
	istringstream iss(s);
	string temp;
	iss >> temp;

	for (int f = 0; f < s.size(); ++f) {
		if (isupper(s[f])) {
	*/

	string temp = s;
	transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
	return temp;
}