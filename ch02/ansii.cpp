#include <iostream>

int main() {
    for (short i = -255; i <= 254; i++) {
        std::cout << char(i) << " ";
    }
    return 0;
}

