#include <iostream>

class part {
private:
    int modelNum;
    int partNum;
    float cost;
public:
    void setPart(int mn, int pn, float c) {
        modelNum = mn;
        partNum = pn;
        cost = c;
    }

    void showPart() {
        std::cout << "Model: " << modelNum <<
            " Detail: " << partNum <<
            " Cost: " << cost <<
            std::endl;
    }
};

int main() {
    part part1;
    part1.setPart(6244, 373, 217.55F);
    part1.showPart();

    return 0;
}