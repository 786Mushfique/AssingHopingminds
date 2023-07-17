#include <iostream>
using namespace std;

int main() {
    int daysLate;
    int totalBooks;
    int misplacedBooks;
    int hamperedBooks;
    int totalFine = 0;

    cout << "Enter the number of days the books are returned late: ";
    cin >> daysLate;

    cout << "Enter the total number of books: ";
    cin >> totalBooks;

    cout << "Enter the number of misplaced books: ";
    cin >> misplacedBooks;

    cout << "Enter the number of hampered books: ";
    cin >> hamperedBooks;

    
    if (daysLate >= 1 && daysLate <= 5) {
        totalFine += 0.40 * daysLate * totalBooks;
    } else if (daysLate > 5 && daysLate <= 10) {
        totalFine += (0.40 * 5 + 0.65 * (daysLate - 5)) * totalBooks;
    } else if (daysLate > 10 && daysLate <= 15) {
        totalFine += (0.40 * 5 + 0.65 * 5 + 0.80 * (daysLate - 10)) * totalBooks;
    } else if (daysLate > 15 && daysLate <= 25) {
        totalFine += (0.40 * 5 + 0.65 * 5 + 0.80 * 5 + 1.20 * (daysLate - 15)) * totalBooks;
    } else if (daysLate > 25) {
        totalFine += (0.40 * 5 + 0.65 * 5 + 0.80 * 5 + 1.20 * 10 + 500) * totalBooks;
    }

  
    totalFine += 500 * misplacedBooks;

   
    totalFine += 200 * hamperedBooks;

    cout << "Total fine: Rs. " << totalFine << endl;

    return 0;
}