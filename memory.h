#ifndef MEMORY_H_
#define MEMORY_H_

#include <stdint.h>

class Memory {
public:
	void stackPush(uint16_t value);
	uint16_t stackPop();

	uint8_t readByte(int addr);
	void writeByte(int addr, uint8_t value);
	uint16_t readTwoBytes(int addr);
	void writeTwoBytes(int addr, uint16_t value);
private:
	uint8_t memory[0xFFFF];
	uint16_t stackPointer = 0xF000;
};

#endif /* MEMORY_H_ */
