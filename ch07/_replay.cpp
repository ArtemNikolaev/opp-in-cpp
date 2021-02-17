#include <iostream>

int main() {
    int age [ 4 ];
    int j;

    for(j = 0; j < 4; j++ ) {
        std::cout << "Enter age: ";
        std::cin >> age[ j ];
    }

    for (j = 0; j < 4; j++) {
        std::cout << "Your ENTER: " << age[ j ] << std::endl;
    }

    return 0;
}