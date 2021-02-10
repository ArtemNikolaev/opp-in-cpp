#include <iostream>

struct part {
    int modelNumber;
    int partNumber;
    float cost;
};

int main() {
    part part1 = { 6244, 373, 217.55F };
    part part2;

    std::cout << "Model " << part1.modelNumber <<
              ", Detail " << part1.partNumber <<
              ", Cost $" << part1.cost <<
        std::endl;

    part2 = part1;

    std::cout << "Model " << part2.modelNumber <<
              ", Detail " << part2.partNumber <<
              ", Cost $" << part2.cost <<
        std::endl;

    return 0;
}