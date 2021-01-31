#include <iostream>
#include <iomanip>

int main() {
    long pop1 = 4789426, pop2 = 274124, pop3 = 9761;

    std::cout << "Without setw" << std::endl;

    std::cout << "City     " << "Population" << std::endl;
    std::cout << "Moscau " << pop1 << std::endl;
    std::cout << "Kirov " << pop2 << std::endl;
    std::cout << "Ugrumova " << pop3 << std::endl;

    std::cout << std::endl << "With setw" << std::endl;

    std::cout << std::setw(9) << "City" << std::setw(12) << "Population" << std::endl;
    std::cout << std::setw(9)  << "Moscau" << std::setw(12) << pop1 << std::endl;
    std::cout << std::setw(9)  << "Kirov" << std::setw(12) << pop2 << std::endl;
    std::cout << std::setw(9)  << "Ugrumova" << std::setw(12) << pop3 << std::endl;

    return 0;
}