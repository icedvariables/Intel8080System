#include <iostream>
#include <fstream>
#include <stdint.h>
#include <string>
#include "intel8080.h"

int main(int argc, char* argv[]) {
	Intel8080 i8080;

	if(argc > 1) {
		std::string filename = argv[1];

		std::cout << "Loading file: " << filename << "\n";
	}

	return 0;
}
