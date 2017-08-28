#ifndef INTEL8080_H_
#define INTEL8080_H_

#include <stdint.h>
#include "registers.h"
#include "memory.h"

class Intel8080 {
public:

private:
	Registers registers;
	Memory memory;
};

#endif /* INTEL8080_H_ */
