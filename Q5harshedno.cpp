 #include <iostream>

 int main() {
     int number;
     std::cout << "Enter a number: ";
     std::cin >> number;

     int temp = number;
     int sumOfDigits = 0;

   while (temp > 0) {
         int digit = temp % 10;
         sumOfDigits += digit;
         temp /= 10;
     }

     if (number % sumOfDigits == 0)
         std::cout << number << " is a Harshad number." << std::endl;
     else
         std::cout << number << " is not a Harshad number." << std::endl;

     return 0;
 }