#include <iostream>
#include <conio.h>

int main() {
    int chcount = 0;
    int wdcount = 1;
    char ch = 'a';
    std::cout << "Vvedite stroky: ";
    while (ch != '\r') {
        ch = _getche();
        if (ch == ' ') {
            wdcount++;
        } else {
            chcount++;
        }
    }

    std::cout << "\nSlov: " << wdcount << std::endl << "Bukv: " << (chcount-1) << std:: endl;

    return 0;
}