#include "FunctionalLibraries.h"
std::string characterValue(int loopNumber)
{
	std::ifstream key("key.txt");
	std::string tempLineInputReceiver{};
	for (int i{}; i < loopNumber; i++)
		{
			tempLineInputReceiver = {};
			std::getline(key, tempLineInputReceiver);
		}
	
	return (tempLineInputReceiver);
}