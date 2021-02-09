#include <iostream>
#include <conio.h>

int main() {
    long num = 0;
    int sifra;
    std::cout << "Vvedite 6 sifr: ";

    while ((sifra = _getche()) != '\r') {
        num = num * 10 + (sifra - '0');
    }

    std::cout << num <<  std:: endl;

    return 0;
}