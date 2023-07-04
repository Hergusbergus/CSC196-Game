#include <iostream>
#include "Core/Random.h"
#include "Core/FileIO.h"
#include "Core/Memory.h"
#include "Core/Time.h"
#include "Renderer/Renderer.h"
using namespace std;
using namespace kiko;
using namespace chrono;
int main()
{
	g_memoryTracker.DisplayInfo();
	int* p = new int;
	g_memoryTracker.DisplayInfo();
	delete p;
	g_memoryTracker.DisplayInfo();
	Time timer;
	for (int i = 0; i < 1000000; i++)
	{

	}
	cout << timer.GetElapsedMilliseconds() << endl;
	//auto i = true;
	//auto start = high_resolution_clock::now;
	//for (int i = 0; i < 100000; i++)
	//{

	//}
	//auto end = high_resolution_clock::now();
	//cout << duration_cast<nanoseconds> (end - start).count() << endl;
	//cout << getFilePath() << endl;
	//setFilePath("Assets");
	//cout << getFilePath() << endl;
	//size_t size;
	//getFileSize("Text.txt", size);
	//cout << size << endl;
	//string s;
	//readFile("Text.txt", s);
	//cout << s << endl;
	//seedRandom((unsigned int)time(nullptr));
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << random(5, 10) << endl;
	//}
}