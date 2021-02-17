#include <iostream>

int main() {
    int month, day, total_days;
    int days_per_month [ 12 ] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    std::cout << "Enter Month (from 1 to 12): ";
    std::cin >> month;

    std::cout << "Enter day (from 1 to 31): ";
    std::cin >> day;

    total_days = day;

    for( int j = 0; j < month - 1; j++ ) {
        total_days += days_per_month[ j ];
    }

    std::cout << "Days from year beggining: " << total_days << std::endl;

    return 0;
}