#include <iostream>

class Distance {
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0) { }
    Distance(int ft, float in): feet(ft), inches(in) { }

    void getDist() {
        std::cout << "Enter feets: "; std::cin >> feet; std::cout << std::endl;
        std::cout << "Enter inches: "; std::cin >> inches; std::cout << std::endl;
    }

    void showDist() {
        std::cout << feet << '-' << inches << std::endl;
    }

    void add_dist(const Distance&, const Distance&);
};

void Distance::add_dist(const Distance& d2, const Distance& d3) {
    inches = d2.inches + d3.inches;
    feet = 0;
    if (inches >= 12.0) {
        inches -= 12.0;
        feet++;
    }
    feet += d2.feet + d3.feet;
}

int main() {
    Distance dist1, dist3;
    Distance dist2(11, 6.25);
    dist1.getDist();
    dist3.add_dist(dist1, dist2);
    std::cout << "dist1 = "; dist1.showDist();
    std::cout << "dist2 = "; dist2.showDist();
    std::cout << "dist3 = "; dist3.showDist();
    std::cout << std::endl;

    return 0;
}