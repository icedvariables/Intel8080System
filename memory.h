#ifndef MEMORY_H_
#define MEMORY_H_

#include <stdint.h>

class Memory {
public:
	void stackPush(uint16_t value);
	uint16_t stackPop();

	uint8_t* read(int addr);
	void write(int addr, uint8_t[], int amount);
	uint8_t read8(int addr);
	void write8(int addr, uint8_t value);
	uint16_t read16(int addr);
	void write16(int addr, uint16_t value);
private:
	uint8_t memory[0xFFFF];
	uint16_t stackPointer = 0xF000;
	uint16_t programCounter = 0;
};

#endif /* MEMORY_H_ */
