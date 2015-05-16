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

	void DoCommand(string command, string input);
	void OpenProgram(string input);
	void StoreFilePath(string input);
private:

};

