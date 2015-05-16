#include "ParseInput.h"


ParseInput::ParseInput()
{
}


ParseInput::~ParseInput()
{
}

void ParseInput::AnalyzeInput(string sentence)
{
	command = sentence.substr(0, sentence.find(' '));
	size_t position = sentence.find(command);
	input = sentence.replace(0, command.size()+1, "");

	if (input.find(".exe") > 0 || input.find(".lnk") > 0)	// Dont need. String already adds another '\' to the input
	{
		size_t tempInt = 0;
		size_t tempInt2 = 0;
		string tempString;
		while (tempInt != string::npos)
		{
			tempInt = input.find('\\', tempInt);
			tempString += input.substr(tempInt2, tempInt + 1);
			tempString += '\\';
			
			tempInt2 = tempInt;
			tempInt++;
		}
		input = tempString;

	}
}

string ParseInput::getCommand()
{
	return command;
}

string ParseInput::getInput()
{
	return input;
}