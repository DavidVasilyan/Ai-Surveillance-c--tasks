#include <iostream>

int main() {
    int num  = 0;
    std::cout << "Enter your number: ";
    std::cin >> num;
    if(num > 0) {
        std::cout << "Number " << num << " is positive" << std::endl;
    }
    else if(num < 0) {
        std::cout << "Number " << num << " is negative"  << std::endl;
    }
    else {std::cout << "Number " << num << " is zero" << std::endl;}

    switch (num)
    {
    case 90 ... 100:
        std::cout << "A\n";
        break;
    case 80 ... 89:
        std::cout << "B\n";
        break;
    case 70 ... 79:
        std::cout << "C\n";
        break;
    case 60 ... 69:
        std::cout << "D\n";
        break;
    case 50 ... 59:
        std::cout << "E\n";
        break;
    default:
        std::cout << "F\n";
        break;
    }

    for(int i = 1; i <= 10; i++){
        std::cout << i << ' ';
    }
}