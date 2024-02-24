#include <iostream>

int addF(int n1, int n2) {
    return n1 + n2;
}

int subtraction(int n1, int n2) {
    return n1 - n2;
}

int multiply(int n1, int n2) {
    return n1 * n2;
}

int divide(int n1, int n2) {
    return n1 / n2;
}

int main() {
    std::cout << "Enter 2 numbers: " << std::endl;
    int num1, num2;
    std::cin >> num1 >> num2;
    int add = addF(num1, num2);
    int sub = subtraction(num1, num2);
    int mul = multiply(num1, num2);
    int div = divide(num1, num2);

    std::cout << "Summary = " << add << std::endl;
    std::cout << "Subtraction = " << sub << std::endl;
    std::cout << "Multiply = " << mul << std::endl;
    std::cout << "divide = " << div << std::endl;
}