#include <iostream>
#include <ctype.h>

int main() {
    char symbol;
    std::cout << "Enter one char: ";
    std::cin >> symbol;

    std::cout << islower(symbol) << std::endl;

    return 0;
}