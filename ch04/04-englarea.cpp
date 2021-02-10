#include <iostream>

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance length;
    Distance width;
};

int main() {
    Room dining = { {13, 6.5}, {10, 0.0}};

    float l = dining.length.feet + dining.length.inches/12;
    float w = dining.width.feet + dining.width.inches/12;

    std::cout << "S: " << l * w << " square feets" << std::endl;

    return 0;
}
