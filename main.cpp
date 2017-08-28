#include <iostream>
#include <stdint.h>
#include "memory.h"

int main(int argc, char* argv[]) {
	Memory m;
	m.writeTwoBytes(0, 1000);

	std::cout << (int)m.readTwoBytes(0) << "\n";

	return 0;
}
