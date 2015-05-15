#include "AppendFromFile.h"

AppendFromFile::AppendFromFile()
{
	commandCollection = new FileCollection();
	ImportFiles();
}


AppendFromFile::~AppendFromFile()
{
}

void AppendFromFile::ImportFiles()	// open .txt and import to collection
{
	ifstream commands("Commands.txt");

	if (commands.is_open())
	{
		while (!commands.eof())
		{
			string word;
			commands >> word;
			commandCollection->addWord(word);
		}
		commands.close();
	}
	else
	{

	}
}

FileCollection* AppendFromFile::getCommandCollection()
{
	return commandCollection;
}