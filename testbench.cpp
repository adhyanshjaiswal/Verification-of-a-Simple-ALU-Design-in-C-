#include <iostream>
#include "alu.h"

void runTests() {
    ALU alu;
    int a, b, choice, shiftAmount;

    while (true) {
        std::cout << "\n-----------------------:";
        std::cout << "\nChoose operation:\n";
        std::cout << "-----------------------:\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "5. Modulo\n";
        std::cout << "6. AND\n";
        std::cout << "7. OR\n";
        std::cout << "8. XOR\n";
        std::cout << "9. NOT\n";
        std::cout << "10. One's Complement\n";
        std::cout << "11. Two's Complement\n";
        std::cout << "12. 9's Complement\n";
        std::cout << "13. 10's Complement\n";
        std::cout << "14. Left Shift\n";
        std::cout << "15. Right Shift\n";
        std::cout << "16. Exit\n";
        std::cout << "-----------------------:\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << "-----------------------:\n";

        switch(choice) {
            case 1: // Addition
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "Enter second number: ";
                std::cin >> b;
                std::cout << "-----------------------:\n";
                std::cout << "Addition Result: " << alu.add(a, b) << std::endl;
                std::cout << "************************\n";
                break;
            case 2: // Subtraction
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "Enter second number: ";
                std::cin >> b;
                std::cout << "-----------------------:\n";
                std::cout << "Subtraction Result: " << alu.subtract(a, b) << std::endl;
                std::cout << "************************\n";
                break;
            case 3: // Multiplication
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "Enter second number: ";
                std::cin >> b;
                std::cout << "-----------------------:\n";
                std::cout << "Multiplication Result: " << alu.multiply(a, b) << std::endl;
                std::cout << "************************\n";
                break;
            case 4: // Division
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "Enter second number: ";
                std::cin >> b;
                std::cout << "-----------------------:\n";
                std::cout << "Division Result: " << alu.divide(a, b) << std::endl;
                std::cout << "************************\n";
                break;
            case 5: // Modulo
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "Enter second number: ";
                std::cin >> b;
                std::cout << "-----------------------:\n";
                std::cout << "Modulo Result: " << alu.modulo(a, b) << std::endl;
                std::cout << "************************\n";
                break;
            case 6: // AND
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "Enter second number: ";
                std::cin >> b;
                std::cout << "-----------------------:\n";
                std::cout << "AND Result: " << alu.andOp(a, b) << std::endl;
                std::cout << "************************\n";
                break;
            case 7: // OR
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "Enter second number: ";
                std::cin >> b;
                std::cout << "-----------------------:\n";
                std::cout << "OR Result: " << alu.orOp(a, b) << std::endl;
                std::cout << "************************\n";
                break;
            case 8: // XOR
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "Enter second number: ";
                std::cin >> b;
                std::cout << "-----------------------:\n";
                std::cout << "XOR Result: " << alu.xorOp(a, b) << std::endl;
                std::cout << "************************\n";
                break;
            case 9: // NOT
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "-----------------------:\n";
                std::cout << "NOT Result: " << alu.notOp(a) << std::endl;
                std::cout << "************************\n";
                break;
            case 10: // One's Complement
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "-----------------------:\n";
                std::cout << "One's Complement Result: ";
                alu.printBinary(alu.onesComplement(a));  // Print in binary
                std::cout << "************************\n";
                break;
            case 11: // Two's Complement
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "-----------------------:\n";
                std::cout << "Two's Complement Result: ";
                alu.printBinary(alu.twosComplement(a));  // Print in binary
                std::cout << "************************\n";
                break;
            case 12: // 9's Complement
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "-----------------------:\n";
                std::cout << "9's Complement Result: ";
                alu.printBinary(alu.ninesComplement(a));  // Print in binary
                std::cout << "************************\n";
                break;
            case 13: // 10's Complement
                std::cout << "Enter first number: ";
                std::cin >> a;
                std::cout << "-----------------------:\n";
                std::cout << "10's Complement Result: ";
                alu.printBinary(alu.tensComplement(a));  // Print in binary
                std::cout << "************************\n";
                break;
            case 14: // Left Shift
                std::cout << "Enter number: ";
                std::cin >> a;
                std::cout << "Enter shift amount: ";
                std::cin >> shiftAmount;
                std::cout << "Left Shift Result: " << alu.leftShift(a, shiftAmount) << std::endl;
                std::cout << "************************\n";
                break;
            case 15: // Right Shift
                std::cout << "Enter number: ";
                std::cin >> a;
                std::cout << "Enter shift amount: ";
                std::cin >> shiftAmount;
                std::cout << "-----------------------:\n";
                std::cout << "Right Shift Result: " << alu.rightShift(a, shiftAmount) << std::endl;
                std::cout << "************************\n";
                break;
            case 16: // Exit
                std::cout << "Exiting program." << std::endl;
                return;  // Exit the testbench
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
        }
    }
}

int main() {
    std::cout << "ALU Verification Testbench\n";
    runTests();
    return 0;
}
