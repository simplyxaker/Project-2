#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int low = 0;
    int high = 100; // The range of numbers in which the program will guess
    char answer;

    std::cout << "Think of a number from 0 to 100.\n";

    do {
        int const guess = (low + high) / 2;
        std::cout << "----------->This is your intended number " << guess << "? (y/n): ";
        std::cin >> answer;

        if (answer == 'y') {
            std::cout << "----------->Great! I guessed the number!\n";
            break;
        }
        if (answer == 'n') {
            std::cout << "----------->Is this number more or less than expected? (enter 'm' or 'l'): ";
            std::cin >> answer;
            if (answer == 'm') {
                low = guess + 1;
            }
            else {
                high = guess - 1;
            }
        }
    } while (true);

    return 0;
}


