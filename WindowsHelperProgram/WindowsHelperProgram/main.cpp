#include <iostream>		// std::cout
#include <windows.h>	
#include <fstream>		// std::ifstream
#include "AppendFromFile.h"
#include "TextRecognition.h"
#include "ParseInput.h"

using namespace std;
string getUserInput();

int main(int argc, char**argv)
{
	AppendFromFile setupCollection;
	TextRecognition recognizeInput;
	ParseInput AnalyzeInput;
	
	string input = getUserInput();	
	AnalyzeInput.AnalyzeInput(input);

	recognizeInput.FindResponse(AnalyzeInput.getCommand(), AnalyzeInput.getInput(), setupCollection.getCommandCollection());

	system("PAUSE");
	return 1;
}

string getUserInput()
{
	string input;

	cout << "Hello" << endl;
	getline(cin, input);
	return input;
}