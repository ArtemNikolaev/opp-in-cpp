#include <iostream>

enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main() {
    days_of_week day1, day2;

    day1 = Mon;
    day2 = Thu;

    int diff = day2 - day1;
    std::cout << "Diff in days: " << diff << std::endl;

    if (day1 < day2) {
        std::cout << "day1 is earlier than day2!" << std::endl;
    }

    return 0;
}