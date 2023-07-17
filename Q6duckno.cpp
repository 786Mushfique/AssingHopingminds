#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int temp = number;
    bool isDuckNumber = false;

    while (temp > 0) {
        if (temp % 10 == 0) {
            isDuckNumber = true;
            break;
        }
        temp /= 10;
    }

    if (isDuckNumber && number % 10 != 0) {
        std::cout << number << " is a duck number." << std::endl;
    } else {
        std::cout << number << " is not a duck number." << std::endl;
    }

    return 0;
}
