#ifndef INTEL8080_H_
#define INTEL8080_H_

#include <stdint.h>
#include "registers.h"
#include "memory.h"

class Intel8080 {
public:
	void loadProgram(uint8_t program[]);
	void run();
private:
	bool running = false;
	Registers registers;
	Memory memory;
};

#endif /* INTEL8080_H_ */
