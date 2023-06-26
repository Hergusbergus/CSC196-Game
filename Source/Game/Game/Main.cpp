#include <iostream>
int main()
{
#ifdef _DEBUG
	std::cout << "Debug!" << std::endl;
#endif
	std::cout << "Hello World!" << std::endl;
}