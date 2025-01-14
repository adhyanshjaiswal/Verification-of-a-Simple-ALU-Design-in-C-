#ifndef ALU_H
#define ALU_H

#include <bitset>  // For binary representation

class ALU {
public:
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);
    int modulo(int a, int b);
    int andOp(int a, int b);
    int orOp(int a, int b);
    int xorOp(int a, int b);
    int notOp(int a);
    int onesComplement(int a);
    int twosComplement(int a);
    int ninesComplement(int a);
    int tensComplement(int a);
    int leftShift(int a, int n);
    int rightShift(int a, int n);
    void printBinary(int num);  // Function to print in binary
};

#endif  // ALU_H
