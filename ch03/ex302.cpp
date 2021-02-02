#include <iostream>
#include <conio.h>
//todo: create static lib for cel to Far and Far to Cel
int main() {
    std::cout << "press 1 for Cel to Far" << std::endl
        << "press 2 for Far to Cel" << std::endl;
    int num;
    std::cin >> num;

    switch (num) {
        case 1:
            std::cout << "Cel to Far";
            break;
        case 2:
            std::cout << "Far to Cel";
            break;
        default:
            std::cout << "Unrecognizable value";
    }

    return 0;
}