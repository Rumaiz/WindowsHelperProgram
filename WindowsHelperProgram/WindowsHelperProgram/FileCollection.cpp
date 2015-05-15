#include "FileCollection.h"

FileCollection::FileCollection() : nCommands(0)
{
	commandVector = new vector<string>();
}


FileCollection::~FileCollection()
{
	delete commandVector;
}

void FileCollection::addWord(string word)	// add command to the back of vector
{
	(*commandVector).push_back(word);
}



vector<string>* FileCollection::getCommandList()	// return vector command list
{
	return commandVector;
}