#include "memory.h"

/*
 * Push a 16 bit value onto the stack.
 */
void Memory::stackPush(uint16_t value) {
	stackPointer -= 2;
	write16(stackPointer, value);
}

/*
 * Pop a 16 bit value off the stack.
 */
uint16_t Memory::stackPop() {
	uint16_t value = read16(stackPointer);
	stackPointer += 2;
	return value;
}

uint8_t* Memory::read(int addr) {
	return &memory[addr];
}

void Memory::write(int addr, uint8_t values[], int amount) {
	for(int i = 0; i < amount; i++) {
		memory[addr + i] = values[i];
	}
}

/*
 * Read 8 bits (a byte) at addr.
 */
uint8_t Memory::read8(int addr) {
	return memory[addr];
}

/*
 * Write 8 bits (a byte) at addr.
 */
void Memory::write8(int addr, uint8_t value) {
	memory[addr] = value;
}

/*
 * Read 16 bits (two bytes) from addr.
 */
uint16_t Memory::read16(int addr) {
	return (memory[addr] << 8) | (memory[addr + 1] & 0xFF);
}

/*
 * Write 16 bits (two bytes) from addr.
 */
void Memory::write16(int addr, uint16_t value) {
	memory[addr + 1] = value & 0xFF;
	memory[addr] = (value & 0xFF00) >> 8;
}
