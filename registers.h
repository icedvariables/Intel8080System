#ifndef REGISTERS_H_
#define REGISTERS_H_

#include <stdint.h>

enum RegisterName {
	REG_A,
	REG_B,
	REG_C,
	REG_D,
	REG_E,
	REG_H,
	REG_L
};

enum FlagName {
	FLAG_SIGN,
	FLAG_ZERO,
	FLAG_PARITY,
	FLAG_CARRY,
	FLAG_AUXCARRY
};

class Registers {
public:
	Registers() : regs{0, 0, 0, 0, 0, 0, 0}, flags{0, 0, 0, 0, 0} {};
	uint8_t get8(int index);
	void set8(int index, uint8_t value);
	uint16_t get16(int index);
	void set16(int index, uint16_t value);

	bool getFlag(int index);
	void setFlag(int index, bool value);

private:
	uint8_t regs[7]; // 7 general purpose registers.
	bool flags[5]; // 5 flags.
};

#endif /* REGISTERS_H_ */
