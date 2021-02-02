#include <iostream>

int main() {
    std::cout << "enter Number: ";
    int num;
    std::cin >> num;

    for (int i = 1; i <= 200; i++) {
        std::cout << num * i << " ";
        if (i % 10 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}