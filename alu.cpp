#include "alu.h"
#include <iostream>

int ALU::add(int a, int b) {
    return a + b;
}

int ALU::subtract(int a, int b) {
    return a - b;
}

int ALU::multiply(int a, int b) {
    return a * b;
}

int ALU::divide(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;  // Return 0 if division by zero
    }
}

int ALU::modulo(int a, int b) {
    if (b != 0)
        return a % b;
    else {
        std::cout << "Error: Modulo by zero!" << std::endl;
        return 0;  // Return 0 if modulo by zero
    }
}

int ALU::andOp(int a, int b) {
    return a & b;
}

int ALU::orOp(int a, int b) {
    return a | b;
}

int ALU::xorOp(int a, int b) {
    return a ^ b;
}

int ALU::notOp(int a) {
    return ~a;
}

int ALU::onesComplement(int a) {
    return ~a;  // ~a flips all bits (one's complement)
}

int ALU::twosComplement(int a) {
    return ~a + 1;  // ~a flips bits, +1 gives two's complement
}

int ALU::ninesComplement(int a) {
    int result = 0, place = 1;
    while (a > 0) {
        result += (9 - (a % 10)) * place;
        a /= 10;
        place *= 10;
    }
    return result;
}

int ALU::tensComplement(int a) {
    return ninesComplement(a) + 1;
}

int ALU::leftShift(int a, int n) {
    return a << n;
}

int ALU::rightShift(int a, int n) {
    return a >> n;
}

void ALU::printBinary(int num) {
    std::bitset<32> binary(num);  // 32 bits for standard integer size
    std::cout << binary << std::endl;
}
