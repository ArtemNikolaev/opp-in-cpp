#include <iostream>

int x;
int& setx();

int main() {
    setx() = 92;
    std::cout << "x=" << x << std::endl;

    return 0;
}

int& setx() {
    return x;
}