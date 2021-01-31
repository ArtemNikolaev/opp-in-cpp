#include <iostream>

const float fut = 7.481;

int main() {
    std::cout << "Enter amount of gallons: ";
    float gal;
    std::cin >> gal;

    std::cout << gal << " In futs: " << gal / fut << std::endl;

    return 0;
}