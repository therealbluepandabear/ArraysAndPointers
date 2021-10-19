#include <iostream>

int main() {
    int luckyNumbers[5];

    std::cout << "\n";

    for (int i = 0; i <= 4; i++) {
        std::cout << "Number: ";
        std::cin >> luckyNumbers[i];
    }

    for (int i = 0; i <= 4; i++) {
        std::cout << *(luckyNumbers + i) << ", ";
    }

    std::flush(std::cout);

    return 0;
}
