#include <iostream>

int main() {
    int luckyNumbers[5] = { 2, 3, 5, 7, 9 };
    std::cout << luckyNumbers << std::endl;
    std::cout << &luckyNumbers[0] << std::endl; // Should be the same result as above.
    std::cout << luckyNumbers[2] << std::endl;

    return 0;
}
