#include <iostream>

int main() {
    int funt, shiling, pence;

    std::cout << "Enter amount of funts: ";
    std::cin >> funt;

    std::cout << "Enter amount of shilings: ";
    std::cin >> shiling;

    std::cout << "Enter amount of pences: ";
    std::cin >> pence;

    pence = shiling * 5 + pence;

    std::cout << "J" << funt + pence / 100 << "." << pence % 100 << std::endl;

    return 0;
}