//Copied from lab 1

#pragma once
#include <vector>
#include <string>

enum arrayIndicies { programName, fileName, numberOfInputs };

enum outcome { success = 0, ranIncorrectly, fileUnopenable };

int parsingInput(std::vector<std::string> & s, char * t);
int usageFunction(const std::string & s);
string convertToLower(const std::string & s);

