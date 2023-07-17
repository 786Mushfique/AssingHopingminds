#include <iostream>

 int main() {
    int number;
     std::cout << "Enter a number: ";
     std::cin >> number;

     int temp = number;
     int sumOfDigits = 0;
     int productOfDigits = 1;

     while (temp > 0) {
         int digit = temp % 10;
         sumOfDigits += digit;
         productOfDigits *= digit;
         temp /= 10;
     }

     if (sumOfDigits == productOfDigits)
         std::cout << number << " is a spy number." << std::endl;
     else
         std::cout << number << " is not a spy number." << std::endl;

     return 0;
 }