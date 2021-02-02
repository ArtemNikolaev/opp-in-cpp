#include <iostream>
#include <conio.h>

int main() {
    int chcount = 0;
    int wdcount = 1;
    char ch = 'a';
    std::cout << "Vvedite stroky: ";
    while ((ch= _getche()) != '\r') {
        if (ch == ' ') {
            wdcount++;
        } else {
            chcount++;
        }
    }

    std::cout << "\nSlov: " << wdcount << std::endl << "Bukv: " << chcount << std:: endl;

    return 0;
}