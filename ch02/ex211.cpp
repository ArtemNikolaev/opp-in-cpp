#include <iostream>
#include <iomanip>

int main() {

    std::cout
        << std::setw(15) << std::setiosflags(std::ios::left) << "Surname"
        << std::setw(15) << std::setiosflags(std::ios::left) << "Name"
        << std::setw(15) << std::setiosflags(std::ios::left) << "Address"
        << std::setw(15) << std::setiosflags(std::ios::left) << "City"
        << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout
            << std::setw(15) << std::setiosflags(std::ios::left) << "Petrov"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Vasiliy"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Klenovaya 16"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Saint-Petersburg"
            << std::endl;
    std::cout
            << std::setw(15) << std::setiosflags(std::ios::left) << "Ivanov"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Sergey"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Osinovaya 3"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Nahodka"
            << std::endl;
    std::cout
            << std::setw(15) << std::setiosflags(std::ios::left) << "Sidorov"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Ivan"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Berezovaya 21"
            << std::setw(15) << std::setiosflags(std::ios::left) << "Kaliningrad"
            << std::endl;
    return 0;
}