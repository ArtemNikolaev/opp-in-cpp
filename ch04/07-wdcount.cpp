#include <iostream>
#include <conio.h>

enum itsaWord { NO, YES};

int main() {
    itsaWord isWord = NO;

    char ch = 'a';
    int wordcount = 0;

    std::cout << "Enter the sentence: \n";

    do {
        ch = _getche();
        if (ch==' ' || ch == '\r') {
            if (isWord == YES) {
                wordcount++;
                isWord = NO;
            }
        } else {
            if (isWord == NO) {
                isWord = YES;
            }
        }
    } while( ch != '\r');

    std::cout << "\n---Amount of words: " << wordcount << "-----\n" << std::endl;

    return 0;
}