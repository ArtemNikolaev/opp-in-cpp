#include <iostream>

int main() {
    int ctemp;
    std::cout << "Введите температуру по Celsius: ";
    std::cin >> ctemp;
    int ftemp =  ctemp * 9 / 5 + 32;
    std::cout << "Температура по Farenheit: " << ftemp << std::endl;
    return 0;

    return 0;
}