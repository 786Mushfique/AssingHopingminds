#include <iostream>
using namespace std;

int CountSpecificNumbers(int m, int n) {
    if (m > n) {
        return -1;
    }

    int count = 0;

    for (int num = m; num <= n; num++) {
        int temp = num;
        bool hasOnly149 = true;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 1 && digit != 4 && digit != 9) {
                hasOnly149 = false;
                break;
            }
            temp /= 10;
        }

        if (hasOnly149) {
            count++;
        }
    }

    return count;
}

int main() {
    int m, n;
    cout << "Enter the range (m and n): ";
    cin >> m >> n;

    int result = CountSpecificNumbers(m, n);

    if (result == -1) {
        cout << "Invalid range! m should be less than or equal to n." << std::endl;
    } else {
        cout << "Count of numbers with only 1, 4, and 9 digits: " << result << std::endl;
    }

    return 0;
}
