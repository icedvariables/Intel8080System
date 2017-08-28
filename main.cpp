#include <iostream>
#include <stdint.h>
#include "registers.h"

int main(int argc, char* argv[]) {
	Registers r;
	r.set16(REG_A, 0xFFF);

	std::cout << (int)r.get8(0) << "\n";

	return 0;
}
