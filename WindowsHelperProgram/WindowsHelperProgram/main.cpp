#ifdef _WIN32
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#endif

#include <iostream>		// std::cout
#include <windows.h>	
#include <fstream>		// std::ifstream
#include "AppendFromFile.h"
#include "TextRecognition.h"
#include "ParseInput.h"

using namespace std;

void WindowsHelperProgram();
string getUserInput();

int main(int argc, char**argv)
{
	
	WindowsHelperProgram();

#ifdef _WIN32
	if (_CrtDumpMemoryLeaks()) {
		cout << "Memory leaks!" << endl;
	}
#endif
	system("PAUSE");
	return 0;
}
void WindowsHelperProgram()
{
	AppendFromFile appendFiles;		// import .txt files into collections
	TextRecognition recognizeInput;	
	ParseInput analyzeInput;

	string input = getUserInput();
	analyzeInput.AnalyzeInput(input);

	recognizeInput.FindResponse(analyzeInput.getCommand(), analyzeInput.getInput(), appendFiles.getCommandCollection());
}

string getUserInput()
{
	string input;

	cout << "Hello" << endl;
	getline(cin, input);
	return input;
}