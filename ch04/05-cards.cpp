#include <iostream>

const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

struct card {
    int number;
    int suit;
};

int main() {
    card temp, chosen, prize;
    int position;

    card card1 = { 7, clubs };
    std::cout << "Card 1: 7 tref" << std::endl;

    card card2 = { jack, hearts };
    std::cout << "Card 2: Jack Hearts" << std::endl;

    card card3 = { ace, spades };
    std::cout << "Card 3: ace of spades" << std::endl;

    prize = card3;
    std::cout << "change 1 and 3...\n";
    temp = card3; card3 = card1; card1 = temp;

    std::cout << "change 2 and 3...\n";
    temp = card3; card3 = card2; card2 = temp;

    std::cout << "change 1 and 2...\n";
    temp = card1; card1 = card2; card2 = temp;

    std::cout << "Where ace of spades(1,2,3)?" << std::endl;
    std::cin >> position;

    switch (position) {
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
    }

    if (chosen.number == prize.number) {
        std::cout << "Winner!";
    } else {
        std::cout << "Loser!";
    }

    return 0;
}