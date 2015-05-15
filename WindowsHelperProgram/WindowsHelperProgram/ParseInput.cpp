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
}

string ParseInput::getCommand()
{
	return command;
}

string ParseInput::getInput()
{
	return input;
}