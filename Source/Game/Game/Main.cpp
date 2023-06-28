#include <iostream>
#include "Core/Random.h"
#include "Core/FileIO.h"
using namespace std;
using namespace kiko;
int main()
{
	cout << getFilePath() << endl;
	seedRandom((unsigned int)time(nullptr));
	for (int i = 0; i < 3; i++)
	{
		cout << random(5, 10) << endl;
	}
}