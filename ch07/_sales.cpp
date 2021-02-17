#include <iostream>

int main() {
    const int SIZE = 6;
    double sales [ SIZE ];

    std::cout << "Enter V sales on every day" << std::endl;

    for(double & sale : sales) {
        std::cin >>  sale;
    }

    double total = 0;
    for(double sale : sales) {
        total += sale;
    }

    double average = total / SIZE;
    std::cout << "Avg. V: " << average << std::endl;

    return 0;
}