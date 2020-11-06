#include "FunctionalLibraries.h"
int createKey()
{
	std::ofstream key("key.txt");
	key.open("key.txt");
	key << "";
	key.close();
	key.open("key.txt", std::ios_base::app);
	std::uniform_int_distribution<int> range(0, 9);
	std::uniform_int_distribution<int> loopRepeat(256, 512);
	std::random_device rd1;
	for (int p{ 0 }; p < 93; p++)
	{
		for (int i{ 0 }; i < loopRepeat(rd1) ; i++)
		{
			key << range(rd1);
		}
		key << '\n';
	}
	key.close();
	return 0;
}