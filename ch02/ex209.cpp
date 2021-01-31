#include <iostream>

int main() {
    int a, b, c, d;
    char dummychar;

    std::cout << "Enter first fraction:";
    std::cin >> a >> dummychar >> b;

    std::cout << "Enter second fraction:";
    std::cin >> c >> dummychar >> d;

    std:: cout << "Summ is: " << (a * d + b * c) << dummychar << b * d;

    return 0;
}