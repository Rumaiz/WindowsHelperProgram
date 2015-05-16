#include "TextRecognition.h"

TextRecognition::TextRecognition()
{
}


TextRecognition::~TextRecognition()
{
}

void TextRecognition::FindResponse(string command, string input, FileCollection* commandCollection)	// compare input with commandVector
{
	PerformAction	runAction;

	for (string compare : *(commandCollection->getCommandList()))
	{
		if (command.compare(compare) == 0)
		{
			runAction.DoCommand(command, input);
		}
	}

}