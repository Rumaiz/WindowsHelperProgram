#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "FileCollection.h"


using namespace std;

class AppendFromFile
{
public:
	AppendFromFile();
	~AppendFromFile();

	FileCollection* getCommandCollection();
private:
	void ImportFiles();
	FileCollection* commandCollection;
};

