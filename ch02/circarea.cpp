#include <iostream>

int main() {
    float rad;
    const float PI = 3.14159F;
    std::cout << "Vvedite radius okrugnosti: ";
    std::cin >> rad;
    float area = PI * rad * rad;
    std::cout << "Ploschad kruga = "<< area << std::endl;

    return 0;
}