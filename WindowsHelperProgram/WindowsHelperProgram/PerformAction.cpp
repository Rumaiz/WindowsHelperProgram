#include "PerformAction.h"


PerformAction::PerformAction()
{
}


PerformAction::~PerformAction()
{
}

void PerformAction::DoCommand(string command, string input)
{

	if (command.compare("open") == 0)
	{

		OpenProgram(input);
	}
	else if (command.compare("store") == 0)
	{
		StoreFilePath(input);
	}
	else if (command.compare("close") == 0)
	{

	}
	else if (command.compare("goodbye") == 0)
	{

	}
}

void PerformAction::OpenProgram(string input)
{
	ShellExecute(NULL, "open", input.c_str(), NULL, NULL, SW_SHOWNORMAL);    // SW_SHOWNORMAL is how window is showed
}

void PerformAction::StoreFilePath(string input)
{

}