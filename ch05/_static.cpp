#include <iostream>

float getavg(float);

int main() {
    float data = 1, avg;

    while (data != 0) {
        std::cout << "Enter VAlue: ";
        std::cin >> data;
        avg = getavg(data);
        std::cout << "Avg: " << avg << std::endl;
    }

    return 0;
}

float getavg(float newData) {
    static float total = 0;
    static int count = 0;

    count++;
    total += newData;

    return total/count;
}
