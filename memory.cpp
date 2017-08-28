#include "memory.h"

/*
 * Push a 16 bit value onto the stack.
 */
void Memory::stackPush(uint16_t value) {
	stackPointer -= 2;
	writeTwoBytes(stackPointer, value);
}

/*
 * Pop a 16 bit value off the stack.
 */
uint16_t Memory::stackPop() {
	uint16_t value = readTwoBytes(stackPointer);
	stackPointer += 2;
	return value;
}

uint8_t Memory::readByte(int addr) {
	return memory[addr];
}

void Memory::writeByte(int addr, uint8_t value) {
	memory[addr] = value;
}

uint16_t Memory::readTwoBytes(int addr) {
	return (memory[addr] << 8) | (memory[addr + 1] & 0xFF);
}

void Memory::writeTwoBytes(int addr, uint16_t value) {
	memory[addr + 1] = value & 0xFF;
	memory[addr] = (value & 0xFF00) >> 8;
}
