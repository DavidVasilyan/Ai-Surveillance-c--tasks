#include <iostream>

int main() {
    int i = 5;
    int& r = i;
    int* ptr = &i;
    (*ptr)++;

    std::cout << i << '\n' << r << '\n' << *ptr;
}