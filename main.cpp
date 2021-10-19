#include <iostream>

int main() {
    int luckyNumbers[5];

    for (int i = 0; i <= 4; i++) {
        std::cout << "Number: ";
        std::cin >> luckyNumbers[i];
    }

    return 0;
}
