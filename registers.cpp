#include "registers.h"
#include <iostream>
#include <stdint.h>

/*
 * Access a regular 8-bit register.
 */
uint8_t Registers::get8(int index) {
	return regs[index];
}

/*
 * Set a regular 8 bit register.
 */
void Registers::set8(int index, uint8_t value) {
	regs[index] = value;
}

/*
 * Treat two 8 bit registers as 16 bit register (eg. get16(REG_A)
 * will return the value of registers A and B as a single 16 bit
 * value).
 */
uint16_t Registers::get16(int index) {
	return (regs[index] << 8) | (regs[index + 1] & 0xFF);
}

/*
 * Set the value of two 8 bit registers being treated as a 16 bit
 * register.
 */
void Registers::set16(int index, uint16_t value) {
	regs[index + 1] = value & 0xFF;
	regs[index] = (value & 0xFF00) >> 8;
}

bool Registers::getFlag(int index) {
	return flags[index];
}

void Registers::setFlag(int index, bool value) {
	flags[index] = value;
}
