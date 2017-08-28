#ifndef MEMORY_H_
#define MEMORY_H_

#include <stdint.h>

class Memory {
public:
	uint8_t readByte(int addr);
	void writeByte(int addr, uint8_t value);
	uint16_t readTwoBytes(int addr);
	void writeTwoBytes(int addr, uint16_t value);
private:
	uint8_t memory[0xFFFF];
};

#endif /* MEMORY_H_ */
