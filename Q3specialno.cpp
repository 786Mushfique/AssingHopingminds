#include <iostream>

 int main() {
     int number;
    std::cout << "Enter a two-digit number: ";
    std::cin >> number;

    int tensDigit = number / 10;
    int onesDigit = number % 10;

     int sum = tensDigit + onesDigit;
     int product = tensDigit * onesDigit;

     int sumAndProduct = sum + product;

     if (sumAndProduct == 59)
        std::cout << number << " is a special number." << std::endl;
     else
         std::cout << number << " is not a special number." << std::endl;

     return 0;
 }