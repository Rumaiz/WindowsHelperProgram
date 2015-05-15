#pragma once
#include <string>
#include <vector>
#include "FileCollection.h"
#include "PerformAction.h"
#include "TextRecognition.h"
#include "AppendFromFile.h"

using namespace std;

class TextRecognition
{
public:
	TextRecognition();
	~TextRecognition();

	void FindResponse(string command, string input, FileCollection* commandCollection);
private:

};

