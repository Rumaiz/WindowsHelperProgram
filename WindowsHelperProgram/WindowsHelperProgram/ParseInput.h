#pragma once
#include <string>

using namespace std;

class ParseInput
{
public:
	ParseInput();
	~ParseInput();

	void AnalyzeInput(string input);
	string getCommand();
	string getInput();

private:
	string command;
	string input;
};

