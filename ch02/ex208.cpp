#include <iostream>

int main() {
    long pop1 = 4789426, pop2 = 274124, pop3 = 9761;

    std::cout << std::setfill(' ') << std::setw(9) << "City" << std::setfill('.') << std::setw(12) << "Population" << std::endl;
    std::cout << std::setfill(' ') << std::setw(9)  << "Moscau" << std::setfill('.') << std::setw(12) << pop1 << std::endl;
    std::cout << std::setfill(' ') << std::setw(9)  << "Kirov" << std::setfill('.') << std::setw(12) << pop2 << std::endl;
    std::cout << std::setfill(' ') << std::setw(9)  << "Ugrumova" << std::setfill('.') << std::setw(12) << pop3 << std::endl;

    return 0;
}