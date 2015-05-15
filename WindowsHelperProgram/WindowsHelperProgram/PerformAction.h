#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class PerformAction
{
public:
	PerformAction();
	~PerformAction();

	void doCommand(string command, string input);
	void openProgram(string input);
private:

};

