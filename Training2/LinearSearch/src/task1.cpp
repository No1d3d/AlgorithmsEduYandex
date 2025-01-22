/*
Task1

Lena is leading the development of a testing system that implements interactive tasks.
Before completing the next stage of the project, it remains to write a module defining the final verdict of the system for an interactive task. The final verdict is determined from the task completion code, the interactor's verdict, and the checker's verdict according to the following rules:

The checker's verdict and the interactor's verdict are integers from 0 to 7 inclusive.
The task completion code is an integer from -128 to 127 inclusive.
If the interactor issued a verdict of 0, the final verdict is 3 if the program terminated with a non-zero code, and the checker's verdict otherwise.
If the interactor has issued verdict 1, the final verdict is equal to the verdict of the checker.
If the interactor issued a verdict of 4, the final verdict is 3 if the program terminated with a non-zero code, and 4 otherwise.
If the interactor has issued a verdict of 6, the final verdict is 0.
If the interactor has issued a verdict of 7, the final verdict is 1.
In all other cases, the final verdict is equal to the verdict of the interactor.
Your task is to implement this module.

Input format
The input file consists of three lines. The first contains an integer r
(-128 <= r <= 127) — the task completion code, the second contains an integer i
(0 <= i <= 7) — the interactor's verdict, and the third contains an integer c
(0 <= c <= 7) — the checker's verdict.
Output format
Print a single integer from 0 to 7 inclusive — the final verdict of the system.
*/
#include <iostream>

int Result(int r, int i, int c) {
    if (i == 0) {
        return (r == 0 ? c : 3);
    } else if (i == 1) {
        return c;
    } else if (i == 4) {
        return (r == 0 ? 4 : 3);
    } else if (i == 6) {
        return 0;
    } else if (i == 7) {
        return 1;
    }
    return i;
}

int main() {
    std::cout << Result(0, 1, 2) << "\n";
    std::cout << Result(1, 1, 2) << "\n";
    std::cout << Result(0, 2, 3) << "\n";
    std::cout << Result(1, 2, 3) << "\n";
    std::cout << Result(0, 3, 4) << "\n";
    std::cout << Result(1, 3, 4) << "\n";
    std::cout << Result(0, 4, 5) << "\n";
    std::cout << Result(1, 4, 5) << "\n";
    std::cout << Result(0, 5, 6) << "\n";
    std::cout << Result(1, 5, 6) << "\n";
    std::cout << Result(0, 6, 7) << "\n";
    std::cout << Result(1, 6, 7) << "\n";
    std::cout << Result(0, 7, 1) << "\n";
    std::cout << Result(1, 7, 1) << "\n";
}