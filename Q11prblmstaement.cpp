#include <iostream>

int BalanceFruits(int a, int m, int rs) {
    if (a > m) {
        int mangoesToBuy = a - m;
        rs -= mangoesToBuy;
    } else if (a < m) {
        int mangoesToSell = m - a;
        rs += mangoesToSell;
    }
    return rs;
}

int main() {
    int apples, mangoes, rupees;
    std::cout << "Enter the number of apples: ";
    std::cin >> apples;
    std::cout << "Enter the number of mangoes: ";
    std::cin >> mangoes;
    std::cout << "Enter the amount of rupees: ";
    std::cin >> rupees;

    int remainingRupees = BalanceFruits(apples, mangoes, rupees);

    std::cout << "Total rupees left after balancing: " << remainingRupees << std::endl;

    return 0;
}