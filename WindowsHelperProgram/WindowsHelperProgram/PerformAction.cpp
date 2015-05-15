#include "PerformAction.h"


PerformAction::PerformAction()
{
}


PerformAction::~PerformAction()
{
}

void PerformAction::doCommand(string command, string input)
{
	if (command.compare("open") == 0)
	{
		openProgram(input);
	}
	else if (command.compare("save") == 0)
	{
		
	}
	else if (command.compare("close") == 0)
	{

	}
	else if (command.compare("goodbye") == 0)
	{

	}
}

void PerformAction::openProgram(string input)
{
	ShellExecute(NULL, "open", input.c_str(), NULL, NULL, SW_SHOWNORMAL);    // SW_SHOWNORMAL is how window is showed
}