#include <iostream>

int main() {
    int ftemp;
    std::cout << "Введите температуру по Фаренгейту: ";
    std::cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    std::cout << "Температура по цельсию " << ctemp << std::endl;
    return 0;
}
