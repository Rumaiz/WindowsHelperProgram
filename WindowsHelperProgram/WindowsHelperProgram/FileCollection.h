#pragma once
#include <iostream>
#include <vector>
#include <string>


using namespace std;

class FileCollection
{
public:
	FileCollection();
	~FileCollection();
	void addWord(string word);
	vector<string>* getCommandList();

private:
	int nCommands;
	
	vector<string>*	commandVector;
};

