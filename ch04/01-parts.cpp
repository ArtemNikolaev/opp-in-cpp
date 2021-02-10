#include <iostream>

struct part {
    int modelNumber;
    int partNumber;
    float cost;
};

int main() {
    part part1;
    part1.modelNumber = 6244;
    part1.partNumber = 373;
    part1.cost = 217.55F;

    std::cout << "Model " << part1.modelNumber <<
              ", Detail " << part1.partNumber <<
              ", Cost $" << part1.cost <<
        std::endl;

    return 0;
}