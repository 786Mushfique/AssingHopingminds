 #include <iostream>

 int main() {
      int number;
      std::cout << "Enter a number: ";
      std::cin >> number;

      int square = number * number;
      int sum = 0;

    
      while (square > 0) {
          sum += square % 10;
          square /= 10;
     }

    
      if (sum == number) {
          std::cout << number << " is a neon number." << std::endl;
      } else {
          std::cout << number << " is not a neon number." << std::endl;
      }

      return 0;
  }