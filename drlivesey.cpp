#include <iostream>
#include <cmath>

int main (int argc, char* argv[]) 
{
	uint64_t ar_sz = pow(2,32);
	char* laugh = new char[ar_sz];
	for (uint64_t i = 0; i < pow(2,31); i+=2)
	{
		laugh[i] = 'A';
		laugh[i+1] = 'X';
	}

	std::cout << laugh << '\n';

	delete[] laugh;

	return 0;
}