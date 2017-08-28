#include <iostream>
#include <stdint.h>
#include "memory.h"

int main(int argc, char* argv[]) {
	Memory m;
	m.stackPush(1000);
	m.stackPush(100);

	std::cout << (int)m.stackPop() << "\n" << (int)m.stackPop() << "\n";

	return 0;
}
