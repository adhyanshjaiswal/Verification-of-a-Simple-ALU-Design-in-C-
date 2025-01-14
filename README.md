# ALU Verification in C++

## Overview
This project verifies an Arithmetic Logic Unit (ALU) using C++ by implementing its core functionality and a testbench. The project demonstrates a clear understanding of ALU design and verification principles.

## Features
- Basic Operations: Addition, Subtraction, AND, OR, XOR.
- Advanced Operations: NOT, Overflow Detection.
- Modular Code with Testbench for Validation.

## How to Run
1. Clone this repository.
2. Navigate to the `src` directory.
3. Compile using `g++ alu.cpp testbench.cpp -o alu_test`.
4. Run the executable: `./alu_test`.

## Sample Output
Choose an operation:
1. Addition
2. Subtraction
...
10. One's Complement
11. Two's Complement
...
Enter your choice: 10

Enter a number: 15

One's Complement (Binary): 11111111111111111111111111110000

🧠 **Learning Objectives**
Understand ALU operations and complement calculations.
Gain hands-on experience with modular programming in C++.
Learn formatted output techniques for binary and decimal results.
Develop interactive C++ programs with user input.

📁 **File Structure**
alu.h: Declares the ALU class and its functions.
alu.cpp: Implements the ALU operations.
testbench.cpp: Manages user interaction and testing of ALU functions.
Enter a number: 15
One's Complement (Binary): 11111111111111111111111111110000
