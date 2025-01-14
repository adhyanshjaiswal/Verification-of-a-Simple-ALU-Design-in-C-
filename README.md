# Simple ALU Design and Verification in C++

This project implements and verifies a **Simple Arithmetic and Logic Unit (ALU)** in C++. The ALU supports a wide range of operations, including arithmetic, logical, and complement calculations, with an interactive user interface.

---

## 🚀 Features

### Supported Operations:
1. **Arithmetic Operations**  
   - Addition, Subtraction, Multiplication, Division, Modulo  

2. **Logical Operations**  
   - AND, OR, XOR, NOT  

3. **Complement Calculations**  
   - 1's Complement (Binary Output)  
   - 2's Complement (Binary Output)  
   - 9's Complement (Binary Output)  
   - 10's Complement (Binary Output)  

4. **Bitwise Shifts**  
   - Left Shift  
   - Right Shift  

### Key Highlights:
- **Interactive Workflow:** The program lets users choose the operation before entering operands.  
- **Formatted Output:**  
  - Arithmetic/logical operations: Results displayed in decimal.  
  - Complement operations: Results displayed in binary.  
- **Modular Design:** Organized into separate files: `alu.h`, `alu.cpp`, and `testbench.cpp`.  

---

## 🛠️ How to Use

### Prerequisites:
- **C++ Compiler** (e.g., `g++`)  
- **VS Code** or any other code editor  

### Steps:
**1. Clone the repository:** 
   git clone https://github.com/<your-username>/simple-alu-verification.git
   cd simple-alu-verification
   
**2. Compile the code:**
  g++ alu.cpp testbench.cpp -o alu_test

**3. Run the program:**
  ./alu_test
   
🧠 **Learning Objectives**
Understand ALU operations and complement calculations.
Gain hands-on experience with modular programming in C++.
Learn formatted output techniques for binary and decimal results.
Develop interactive C++ programs with user input.
📁 **File Structure**
alu.h: Declares the ALU class and its functions.
alu.cpp: Implements the ALU operations.
testbench.cpp: Manages user interaction and testing of ALU functions.
